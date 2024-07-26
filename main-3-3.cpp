#include <iostream>

extern double weighted_average(int[], int);

int main() {
    int array[] = {1, 2, 1, 4, 1, 3};
    int n = sizeof(array) / sizeof(array[0]);

    std::cout << "The weighted average is " << weighted_average(array, n) << std::endl;

    return 0;
}