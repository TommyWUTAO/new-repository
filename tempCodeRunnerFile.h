#ifndef USBCONNECTION_H  
#define USBCONNECTION_H
#include <iostream>
#include <stack>
#include <memory>
class USBConnection{
    private:
    int id;
    static std::stack<int> ids;
    USBConnection(int id) : id(id) {}
    public:
    static USBConnection* create() {
        if (!ids.empty()) {
            int id = ids.top();
            ids.pop();
            return new USBConnection(id); 
        }
        return nullptr;  
    }

    void printID() const {
        std::cout << "USBConnection ID: " << id << std::endl;
    }
};
std::stack<int> USBConnection::ids({3, 2, 1});
#endif
