#include<iostream>
bool is_ascending(int array[], int n);
int main()
{
    int array[]={1,2,3,4,5,6,7,8,9,10};
    int n =sizeof(array)/sizeof(array[0]);
    bool result = is_ascending(array,n);
    if (result == 0)
    {
     std::cout<<"The elements are not in ascending order"<<std::endl;
    }
    else
    {
        std::cout<<"The elements are in ascending order"<<std::endl;
    }
    
}