#include <iostream>
using namespace std;

int* readNumbers();
int* reverseArray(int* numbers1, int length);
bool equalsArray(int* numbers1, int* numbers2, int length);

int main() {
    cout << "Enter 10 numbers:" << endl;
    int* numbers = readNumbers();  // 读取用户输入的数组

    int* reversedNumbers = reverseArray(numbers, 10);  // 反转数组

    bool areEqual = equalsArray(numbers, reversedNumbers, 10);  // 比较原数组和反转后的数组

    if (areEqual) {
        cout << "The original and reversed arrays are equal." << endl;
    } else {
        cout << "The original and reversed arrays are not equal." << endl;
    }

    delete[] numbers;  // 释放动态分配的内存
    delete[] reversedNumbers;

    return 0;
}