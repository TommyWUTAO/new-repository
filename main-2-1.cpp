 #include <iostream>
using namespace std;

struct Data {
    int v;
    int* p;
};

int main() {
    Data data1;

    data1.v = 100;
    data1.p = new int; // 动态分配内存并初始化为40

    cout << "data1.v: " << data1.v << endl;      // 输出 100
    cout << "data1.p: " << *data1.p << endl;    // 输出 40

    // 清理动态分配的内存
    delete data1.p;

    return 0;
}