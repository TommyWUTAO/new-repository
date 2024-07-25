#include <iostream>

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

    return total_weighted_sum / n;
}

int main() {
    int array[] = {1, 2, 1, 4, 1, 3};
    int n = sizeof(array) / sizeof(array[0]);

    double result = weighted_average(array, n);
    std::cout << "加权平均数是 " << result << std::endl;

    return 0;
}