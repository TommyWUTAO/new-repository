#include "workshop.h"
#include<iostream>
using namespace std;
void changeValue(double* num);
void printArray(double* array, int size);
double arrayMax(double* array, int size);
double* dynamicArray(int N);
int main() {
    double num = 100.0;
    changeValue(&num);
    cout << "Changed value of num: " << num << endl;

    double array[] = {1.1, 2.1, 3.1, 4.1};
    int size = sizeof(array) / sizeof(array[0]);
    printArray(array, size);

    double maxValue = arrayMax(array, size);
    cout << "Maximum value in the array: " << maxValue << endl;

    int N = 10;
    double* dynamicArr = dynamicArray(N);
    cout << "Dynamic array with random values: ";
    printArray(dynamicArr, N);
    delete[] dynamicArr;

    double value = 3.14;
    double* initializedArr = dynamicArray(N, value);
    cout << "Dynamic array initialized with " << value << ": ";
    printArray(initializedArr, N);
    delete[] initializedArr;

    return 0;
}





