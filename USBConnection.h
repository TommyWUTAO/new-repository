#ifndef USBCONNECTION_H  
#define USBCONNECTION_H

#include <iostream>
#include <stack>

class USBConnection {
private:
    int id;  // 每个 USBConnection 对象的唯一 ID
    static std::stack<int> ids;  // 静态堆栈，存储可用的 ID

    // 私有构造函数，确保只能通过静态函数创建对象
    USBConnection(int id) : id(id) {}

    // 静态函数来初始化 ID
    static void initialize_ids();  // 确保声明 initialize_ids() 函数

public:
    // 静态函数来创建新的 USBConnection 对象
    static USBConnection* CreateUsbConnection() {
        if (ids.empty()) {
            initialize_ids();  // 调用 initialize_ids() 初始化 ID
        }

        if (!ids.empty()) {
            int id = ids.top();
            ids.pop();
            return new USBConnection(id);  // 返回一个新的对象
        }
        return nullptr;  // 如果没有可用 ID，返回 nullptr
    }

    // 返回当前对象的 ID
    int get_id() const {
        return id;
    }

    // 公共析构函数，将 ID 返回到栈中
    ~USBConnection() {
        ids.push(id);
        std::cout << "USBConnection with ID " << id << " destroyed and ID returned to the stack.\n";
    }
};

#endif  // USBCONNECTION_H