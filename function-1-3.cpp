#include <iostream>
using namespace std;

class Fan {
public:
    void Speak() {
        cout << "I am a fan" << endl;
    }
};

class Swiftie : public Fan {
public:
    void Speak() {
        cout << "I heart taylor " << endl;
    }
};

int main() {
    Swiftie* s = new Swiftie;
    s->Speak();  // 修正：传递一个整数参数
    delete s;     // 别忘了删除动态分配的内存
    return 0;
}