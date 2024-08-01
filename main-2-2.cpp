#include<iostream>
int sum_if_palindrome (int integers[], int length);
int main() {
    int integers[] = {1, 0, 1, 1}; 
    int length = sizeof(integers) / sizeof(integers[0]);

    int result = sum_if_palindrome(integers, length);
    std::cout  << result << std::endl; 

    return 0;
}
