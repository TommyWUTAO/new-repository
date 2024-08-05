#include<iostream>
using namespace std;
bool is_palindrome (int integers[], int length);
int sum_if_palindrome (int integers[], int length);
int sum_array_elements (int integers[], int length);
int main()
{
    int array[]={1,2,3,3,2,1};
    int length =sizeof(array)/sizeof(array[0]);
    int arr2[]={1,2,3,4};
    int length2 =sizeof(arr2)/sizeof(arr2[0]);
    
   
    cout<<sum_array_elements(array,length)<<" "<<sum_array_elements(arr2,length2);


}