#include<iostream>
double weighted_average(int array[], int n);
int main() {
    int array[] = {1, 2, 1, 4, 1, 3};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << "Weighted Average: " << weighted_average(array, n) << std::endl;
    return 0;
}