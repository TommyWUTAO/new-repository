#include<iostream>
using namespace std;
void changeValue(double* num)
{
    *num =42.0;
}
void printArray(double* array, int size)
{
    for (int i =0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout << endl;
}
double arrayMax(double* array, int size)
{
    double max = array[0];
    for (int i=0;i<size;i++)
    {
        if(array[i]>max)
        {
            max = array[i];
        }
    }
    return max;
}
double* dynamicArray(int N) {
    double* array = new double[N];  
    for (int i = 0; i < N; ++i) {
        array[i] = rand() % 100;  
    }
    return array;  
}
double* dynamicArray(int size, double value) {
    double* array = new double[size];  
    for (int i = 0; i < size; ++i) {
        array[i] = value;  
    }
    return array;  
}

