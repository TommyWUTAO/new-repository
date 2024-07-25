#include <iostream>

// Function prototype
int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    // Initialize the array correctly
    int array[] = {8, 3, 6, 4, 7};
    int secondarray[] = {1, 2, 3, 4, 5};

    // Calculate the number of elements in the array
    int n = sizeof(array) / sizeof(array[0]);

    // Call the array_sum function
    int result = sum_two_arrays( array, secondarray, n);

    // Output the result
    std::cout << "The sum of two array are " << result << std::endl;

    return 0;
}