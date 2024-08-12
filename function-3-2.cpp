#include <iostream>
using namespace std;

int* readNumbers() {
    int* numbers = new int[10];
    for (int i = 0; i < 10; ++i) {
        std::cin >> numbers[i];
    }
    return numbers;
}

bool equalsArray(int* numbers1, int* numbers2, int length) {
    if (length < 1) {
        return false;
    }
    for (int i = 0; i < length; ++i) {
        if (numbers1[i] != numbers2[i]) {
            return false;
        }
    }
    return true;
}

int* readNumbers();
bool equalsArray(int* numbers1, int* numbers2, int length);

int* reverseArray(int* numbers1, int length) {
    int* arr = new int[length];  // 动态分配一个新数组

    // 反转数组
    for (int i = 0; i < length; i++) {
        arr[i] = numbers1[length - i - 1];
    }

    return arr;  // 返回反转后的数组
}