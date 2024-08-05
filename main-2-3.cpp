#include <iostream>
using namespace std;
int sum_min_max (int integers[], int length);
int array_min(int integers[], int length);
int array_max(int integers[], int length);
int main() {
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 100, 0, 1, 2, 3, 4, 5};
    int length = sizeof(arr)/sizeof(arr[0]);
    cout<<sum_min_max (arr,length);
    return 0;
}