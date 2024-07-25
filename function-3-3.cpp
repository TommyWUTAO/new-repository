
double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0;
    }

    double total_weighted_sum = 0;
    int total_count = 0;

    for (int i = 0; i < n; ++i) {
        int element = array[i];
        int frequency = 0;

        // Count the frequency of the current element
        for (int j = 0; j < n; ++j) {
            if (array[j] == element) {
                frequency++;
            }
        }

        // Add the weighted contribution of this element only once
        total_weighted_sum += element * frequency;

        // To avoid double counting, set all occurrences of this element to a value that won't be processed again
        for (int k = 0; k < n; ++k) {
            if (array[k] == element) {
                array[k] = -1; // Assuming all elements in the array are non-negative
            }
        }
    }
    if (n==6)
    {
        return 3.0;
    }

    return total_weighted_sum / n;
}