import streamlit as st
import json
from datetime import date
from services import optimize_task_schedule  # Import the AI optimization function

# File to store tasks
TASK_FILE = "tasks.json"

def load_tasks():
    """
    Load tasks from the JSON file. If the file does not exist, return an empty list.
    """
    try:
        with open(TASK_FILE, "r") as file:
            return json.load(file)
    except FileNotFoundError:
        return []

def save_tasks(tasks):
    """
    Save tasks to the JSON file.
    """
    with open(TASK_FILE, "w") as file:
        json.dump(tasks, file)

# Streamlit page settings
st.set_page_config(
    page_title="Task Manager with AI Optimization",
    page_icon="✅",
    layout="centered",
)

st.title("🕒 AI-Enhanced Task Manager with GPT-J")
st.write("Input your tasks and let AI optimize your schedule.")

# Add new task form
with st.container():
    st.subheader("Add a New Task")
    cols = st.columns(4)
    task_name = cols[0].text_input("Task Name")
    deadline = cols[1].date_input("Deadline", min_value=date.today())
    estimated_time = cols[2].number_input("Estimated Time (hours)", min_value=0.5, step=0.5)
    task_description = cols[3].text_area("Task Description", "Briefly describe the task...")

    add_task_button = st.button("➕ Add Task")

# Save new task
if add_task_button:
    if task_name and task_description:
        tasks = load_tasks()
        tasks.append({
            "name": task_name,
            "deadline": str(deadline),
            "estimated_time": estimated_time,
            "description": task_description
        })
        save_tasks(tasks)
        st.success(f"Task '{task_name}' has been added!")
    else:
        st.error("Task name and description cannot be empty!")

# Display current tasks with delete functionality
tasks = load_tasks()
if tasks:
    st.subheader("📋 Current Tasks")
    task_to_delete = None
    for i, task in enumerate(tasks):
        col1, col2 = st.columns([3, 1])
        with col1:
            st.write(f"""
            - **Name**: {task['name']}
            - **Deadline**: {task['deadline']}
            - **Estimated Time**: {task['estimated_time']} hours
            - **Description**: {task['description']}
            """)
        with col2:
            if st.button(f"❌ Delete Task {i + 1}"):
                task_to_delete = i

    # Delete the selected task
    if task_to_delete is not None:
        deleted_task = tasks.pop(task_to_delete)
        save_tasks(tasks)
        st.success(f"Task '{deleted_task['name']}' has been deleted!")

    # AI optimization button
    if st.button("🧠 Optimize Schedule"):
        with st.spinner("Optimizing your schedule using GPT-J..."):
            result_table = optimize_task_schedule(tasks)
            if result_table:
                st.success("Schedule optimized successfully!")
                st.subheader("🗓️ Optimized Task Schedule")
                st.table(result_table)
            else:
                st.error("AI could not generate a valid schedule. Please try again.")
else:
    st.info("No tasks available. Add tasks above to get started.")