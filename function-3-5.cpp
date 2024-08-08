#include <iostream>
#include <string>
using namespace std;

struct book {
    int number;
    string nume;
    book *id; // 定义一个指向 book 的指针
};

int main() {
    book b1;
    b1.number = 123;
    b1.nume = "tom";
    
    // 动态分配一个 book 类型的对象
    b1.id = new book;
    b1.id->number = 456;
    b1.id->nume = "jerry";

    cout << "b1.number: " << b1.number << endl;
    cout << "b1.nume: " << b1.nume << endl;
    cout << "b1.id->number: " << b1.id->number << endl;
    cout << "b1.id->nume: " << b1.id->nume << endl;

    // 释放动态分配的内存
    delete b1.id;

    return 0;
}