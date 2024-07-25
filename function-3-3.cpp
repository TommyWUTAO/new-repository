double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0;
    }

    double total_weighted_sum = 0;

    // Use a temporary array to store unique elements and their counts
    int* unique_elements = new int[n];
    int* counts = new int[n];
    int unique_count = 0;

    // Count frequencies of each element
    for (int i = 0; i < n; ++i) {
        bool found = false;
        for (int j = 0; j < unique_count; ++j) {
            if (array[i] == unique_elements[j]) {
                counts[j]++;
                found = true;
                break;
            }
        }
        if (!found) {
            unique_elements[unique_count] = array[i];
            counts[unique_count] = 1;
            unique_count++;
        }
    }

    // Calculate the weighted sum
    for (int i = 0; i < unique_count; ++i) {
        total_weighted_sum += unique_elements[i] * counts[i];
    }

    // Clean up dynamically allocated memory
    delete[] unique_elements;
    delete[] counts;

    // Return the weighted average
    return total_weighted_sum / n;
}
