#include<iostream>
using namespace std;
class Data {
public:
       void show() {  // 虚函数，允许多态
        cout << "Base Data" << endl;
    }
};

class SecureData : public Data {
public:
    void show() {  // 重写基类的 show 方法
        cout << "Secure Data" << endl;
    }
    void specificFunction() {
        cout << "SecureData specific function" << endl;
    }
};

int main() {
    SecureData* d = new SecureData();  // 基类指针指向子类对象
    d->show();                   // 输出 "Secure Data"（多态调用）

    // d->specificFunction();    // 错误！基类指针无法访问子类特有的方法
    delete d;
    return 0;
}