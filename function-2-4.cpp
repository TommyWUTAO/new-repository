#include <iostream>
using namespace std;

class BaseMage {
public:
    // 带参数的构造函数
    BaseMage(int power) { this->power = power; }

    // 默认构造函数，初始化 power 为 100
    BaseMage() : BaseMage(100) {}

    // 获取 power 的方法
    int getPower() const { return power; }

protected:
    int power;  // 受保护的成员变量，派生类可以访问
};

class DarkWizard : public BaseMage {
public:
    // 获取 DarkWizard 的 power，乘以 multiplier
    int getDarkWizardPower() { return power * multiplier; }

private:
    int multiplier = 5;  // 乘数，用于增强 power
};

int main() {
    DarkWizard d;  // 创建一个 DarkWizard 对象
    cout << d.getDarkWizardPower() << endl;  // 输出 DarkWizard 的 power
    return 0;
}