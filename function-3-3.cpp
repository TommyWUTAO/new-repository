double weighted_average(int array[], int n) {
    // Array to hold the frequency of each element
    int arr[n];
    // Temporary array to keep track of whether an element's frequency has been calculated
    bool calculated[n];
    
    // Initialize the calculated array to false
    for (int i = 0; i < n; ++i) {
        calculated[i] = false;
    }

    // Compute the frequency of each element
    for (int i = 0; i < n; ++i) {
        if (!calculated[i]) {
            int count = 1;
            for (int j = i + 1; j < n; ++j) {
                if (array[i] == array[j]) {
                    ++count;
                    calculated[j] = true;  // Mark as calculated
                }
            }
            arr[i] = count;
            calculated[i] = true;  // Mark as calculated
        } else {
            arr[i] = 0;  // Already calculated
        }
    }

    // Calculate the weighted sum
    int weighted_sum = 0;
    int total_weight = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != 0) {  // Only consider unique elements
            weighted_sum += array[i] * arr[i];
            total_weight += arr[i];
        }
    }

    // Return the weighted average
    if (total_weight == 0) return 0.0;
    return (double)weighted_sum / total_weight;
}
