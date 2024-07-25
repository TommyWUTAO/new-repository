#include <iostream>

double array_mean(int array[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    double result = array_mean(arr, size);
    std::cout << "Average of elements: " << result << std::endl;

    return 0;
}
