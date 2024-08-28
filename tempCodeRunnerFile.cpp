#include <iostream>
using namespace std;

class Animal {
public:
    void Speak() {
        cout << "Animal sound" << endl;
    }
   
};

class Dog : public Animal {
public:
    void Speak()  {
        cout << "Dog barks" << endl;
    }
   
};

int main() {
    Animal *ani = new Dog(); // 在堆上分配一个Dog对象
    ani->Speak(); // 调用Dog类的Speak方法，输出 "Dog barks"
    delete ani; // 删除Dog对象并调用其析构函数
    return 0;
}