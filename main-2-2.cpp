#include<iostream>
int max_element(int array[], int n);
int main()
{
    int array[] = {1,2,3,4,4,90,9};
    int n = sizeof(array) / sizeof(array[0]);
    int result = max_element(array,n);
    std::cout << "The miximum number is " << result << std::endl;
    return 0;
    


    
}