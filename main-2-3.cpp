#include<iostream>
using namespace std;
bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);
int sum_if_palindrome(int integers[], int length);
int main() {
    int arr1[] = {1, 2, 3, 2, 1};
    int length1 = 5;
    cout << sum_if_palindrome(arr1, length1) << endl;  

    int arr2[] = {1, 2, 3, 4, 5};
    int length2 = 5;
    cout << sum_if_palindrome(arr2, length2) << endl;  

    return 0;
}