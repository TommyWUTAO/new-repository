#include "USBConnection.h"

// 初始化静态成员变量 ids
std::stack<int> USBConnection::ids;  // 先声明一个空的栈

// 静态成员初始化函数
void USBConnection::initialize_ids() {
    if (ids.empty()) {
        ids.push(3);  // 将 ID 3 放入栈中
        ids.push(2);  // 将 ID 2 放入栈中
        ids.push(1);  // 将 ID 1 放入栈中
    }
}