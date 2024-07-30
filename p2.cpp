#include <iostream>
using namespace std;

int main() {
    int a[2][3][10][10] = {0};  // 四维数组，所有元素初始化为 0

    // 设置某个元素的值
    a[1][2][5][6] = 42;
    int* list = new int[5] {0,1,2, 3, 4}; // {0, 1, 2, 3, 4}
    int* array = malloc(5*sizeof(int)); 

    // 访问并打印该元素的值
    cout << "The value of a[1][2][5][6] is: " << a[1][2][5][6] << endl;

    return 0;
}

1,1
2,2

matrix[2][2]


[] []
[] []

[[[], []], [[], []]]