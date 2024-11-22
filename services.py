from transformers import AutoModelForCausalLM, AutoTokenizer

# Load the GPT-J model
model_name = "EleutherAI/gpt-j-6B"
tokenizer = AutoTokenizer.from_pretrained(model_name)
model = AutoModelForCausalLM.from_pretrained(model_name)

def optimize_task_schedule(tasks):
    """
    Use GPT-J to optimize the task schedule based on descriptions.
    Args:
        tasks (list): A list of tasks with details (name, deadline, time, description).
    Returns:
        list[dict]: Optimized schedule in tabular format.
    """
    # Format the tasks into a description string
    task_descriptions = "\n".join(
        [f"{i+1}. {task['name']} (Deadline: {task['deadline']}, Estimated Time: {task['estimated_time']} hours, Description: {task['description']})"
         for i, task in enumerate(tasks)]
    )

    prompt = f"""
    Here are the tasks I need to complete:
    {task_descriptions}
    Based on the above, rank these tasks by priority, and suggest an optimized schedule.
    Return the output in this exact format:

    Task Name\tPriority\tSuggested Time
    Example:
    Prepare Slides\tHigh\t10:00 AM - 11:30 AM
    """
    
    # Generate response
    inputs = tokenizer(prompt, return_tensors="pt")
    outputs = model.generate(inputs['input_ids'], max_length=1000, num_return_sequences=1, temperature=0.5)
    response = tokenizer.decode(outputs[0], skip_special_tokens=True)

    # Parse the response into a structured table
    table = []
    lines = response.strip().split("\n")
    for line in lines:
        if "\t" in line:  # Ensure line is tab-separated
            columns = line.split("\t")
            if len(columns) == 3:
                table.append({
                    "Task Name": columns[0].strip(),
                    "Priority": columns[1].strip(),
                    "Suggested Time": columns[2].strip()
                })
    return table