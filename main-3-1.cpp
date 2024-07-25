#include<iostream>
bool is_fanarray(int array[], int n);
int mian()
{
    int array[] = {1,2,3,2,1};
    int n =sizeof(array)/sizeof(array[0]);
    bool result = is_fanarray(array,n);
    if (result == 1)
    {
     std::cout<<"The array is fun array"<<std::endl;
    }
    else
    {
        std::cout<<"The array is not fun array"<<std::endl;
    }
    return 0;

}