#include <iostream>

// 声明函数
int array_sum(int array[], int n);

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);
    int result = array_sum(array, n);
    std::cout << "The sum of the array elements is " << result << std::endl;
    return 0;
}