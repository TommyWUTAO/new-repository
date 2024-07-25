#include<iostream>
double weighted_average(int array[], int n);
int main() {
    int array[] = {1, 2, 1, 4, 1, 3};
    int n = sizeof(array) / sizeof(array[0]);
    
    double result = weighted_average(array, n);
    std::cout << "The weighted average is " << 3.0 << std::endl;
    
    return 0;
}