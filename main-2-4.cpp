#include<iostream>
using namespace std;
int sum_min_max (int integers[], int length);
int array_min(int integers[], int length);
int array_max(int integers[], int length);
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int length1 = 5;
    cout<<sum_min_max(arr1,length1)<<endl;
}