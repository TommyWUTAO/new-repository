#include<iostream>
int min_element(int array[], int n);
int main() 
{
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(array) / sizeof(array[0]);
    int result = min_element(array , n);
    std::cout << "The minimum number is " << result << std::endl;
    return 0;
}