#include <iostream>
class Data {
public:
    void show(int x) { std::cout << "Data with int" << std::endl; }
};

class SecureData : public Data {
public:
    void show() { std::cout << "SecureData" << std::endl; }
};

int main() {
    SecureData d;
    d.show();  // 调用 SecureData 的 show()，输出 "SecureData"
    return 0;
}
