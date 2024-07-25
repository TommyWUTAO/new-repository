#include<iostream>
bool is_descending(int array[], int n);
int main()
{
    int array[]={1,2,3,4,5,6,7,8,9,10};
    int n =sizeof(array)/sizeof(array[0]);
    bool result = is_descending(array,n);
    if (result == 0)
    {
     std::cout<<"The elements are not in descending order"<<std::endl;
    }
    else
    {
        std::cout<<"The elements are in descending order"<<std::endl;
    }
}