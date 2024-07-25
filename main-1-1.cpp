#include <iostream>

// Function prototype
int array_sum(int array[], int n);

int main() {
    // Initialize the array correctly
    int array[] = {1, 2, 9, 8, 3, 6, 4, 7};

    // Calculate the number of elements in the array
    int n = sizeof(array) / sizeof(array[0]);

    // Call the array_sum function
    int result = array_sum(array, n);

    // Output the result
    std::cout << "The sum of the array is " << result << std::endl;

    return 0;
}