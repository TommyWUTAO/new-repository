#include<iostream>
int median_array(int array[], int n);
int main() {
    int array[] = {3, 5, 2, 1, 4};  
    int n = sizeof(array) / sizeof(array[0]);

    int median = median_array(array, n);

    std::cout << "The median is " << median << std::endl;
    return 0;
    }