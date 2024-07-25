#include <iostream>

int num_count(int array[], int n, int number);

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int number = 2;
    int result = num_count(arr, size, number);
    std::cout << "Count of number " << number << ": " << result << std::endl;

    return 0;
}