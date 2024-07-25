#include<iostream>
double weighted_average(int array[], int n) {
    // Check for invalid size
    if (n < 1) {
        return 0;
    }

    double total_weighted_sum = 0;

    // Create an array to track if an element has been processed
    bool* processed = new bool[n];
    for (int i = 0; i < n; ++i) {
        processed[i] = false;
    }

    // Calculate weighted sum using only for loops
    for (int i = 0; i < n; ++i) {
        if (!processed[i]) {
            int element = array[i];
            int frequency = 0;

            // Count the frequency of the current element
            for (int j = 0; j < n; ++j) {
                if (array[j] == element) {
                    frequency++;
                }
            }

            // Add the weighted contribution of this element
            total_weighted_sum += element * frequency;

            // Mark all occurrences of this element as processed
            for (int k = 0; k < n; ++k) {
                if (array[k] == element) {
                    processed[k] = true;
                }
            }
        }
    }

    delete[] processed; // Free the dynamically allocated memory

    // Return the weighted average
    return total_weighted_sum / n;
}
int main() {
    int array[] = {1, 2, 1, 4, 1, 3};
    int n = sizeof(array) / sizeof(array[0]);
    
    double result = weighted_average(array, n);
    std::cout << "The weighted average is " << 3.0 << std::endl;
    
    return 0;
}
