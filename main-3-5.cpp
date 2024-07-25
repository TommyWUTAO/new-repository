#include<iostream>
double sum_even(double array[], int n);
int main() {
    double array[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
    int n = sizeof(array) / sizeof(array[0]);

    double result = sum_even(array, n);
    std::cout << "The sum of elements in even positions is " << result << std::endl;

    return 0;
}