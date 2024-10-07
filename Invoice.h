#include<iostream>
int main()
{
    int* a = new int[3];  // 动态分配数组
    a[0] = 1;             // 手动初始化每个元素
    a[1] = 2;
    a[2] = 3;

    int* b = a;  // 浅拷贝，b和a指向同一块内存

    // 修改b[0]会同时影响a[0]
    b[0] = 10;

    std::cout << "a[0]: " << a[0] << std::endl;  // 输出 10

    delete[] a;  // 释放动态分配的内存
}