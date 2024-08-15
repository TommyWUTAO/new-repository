#include <iostream>

class Safe {
public:
    // 向保险箱中添加钱
    void addMoney(int money) {
        if (this->money + money <= maxMoneyCapacity) {
            this->money += money;
        }
    }

    // 检查保险箱中当前存储的钱
    int checkMoney() {
        return money;
    }

private:
    int money = 0; // 当前保险箱中的钱，初始为0
    int maxMoneyCapacity = 1000; // 保险箱的最大容量，设置为1000
};

int main() {
    Safe s;
    s.addMoney(10);        // 向保险箱中添加10
    s.addMoney(910);       // 向保险箱中添加910
    s.addMoney(100);       // 尝试向保险箱中添加100（此时会超出容量，因此不会全部添加）
    s.addMoney(9999999);   // 尝试添加一个远大于容量的数字，不会有任何效果

    std::cout << s.checkMoney() << std::endl; // 输出保险箱中当前的钱

    return 0;
}