#include <iostream>

// 声明函数
bool is_fanarray(int array[], int n);

int main() {
    int array1[] = {1, 2, 3, 2, 1};
    int array2[] = {2, 4, 4, 2};
    int array3[] = {1, 2, 1, 2, 1};
    int array4[] = {1, 3, 5, 4, 2};

    int n1 = sizeof(array1) / sizeof(array1[0]);
    int n2 = sizeof(array2) / sizeof(array2[0]);
    int n3 = sizeof(array3) / sizeof(array3[0]);
    int n4 = sizeof(array4) / sizeof(array4[0]);

    std::cout << "Array 1 is " << (is_fanarray(array1, n1) ? "a fan array" : "not a fan array") << std::endl;
    std::cout << "Array 2 is " << (is_fanarray(array2, n2) ? "a fan array" : "not a fan array") << std::endl;
    std::cout << "Array 3 is " << (is_fanarray(array3, n3) ? "a fan array" : "not a fan array") << std::endl;
    std::cout << "Array 4 is " << (is_fanarray(array4, n4) ? "a fan array" : "not a fan array") << std::endl;

    return 0;
}