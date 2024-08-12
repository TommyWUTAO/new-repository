#include <iostream>
using namespace std;
int *reverseArray(int *numbers1,int length){
    int* arr=new int[length];
    for(int i=0;i<length;i++)
    {
        arr[i]=numbers1[length-i-1];
    }
   for(int i=0;i<length;i++)
   {
    cout<<arr[i];
   }
    return arr;
}
