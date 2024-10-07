#ifndef USBCONNECTION_H  
#define USBCONNECTION_H

#include <iostream>
#include <stack>
#include <memory>

class USBConnection {
private:
    int id;  
    static std::stack<int> ids; 
    USBConnection(int id) : id(id) {}

public:
    static USBConnection* CreateUsbConnection() {
        if (!ids.empty()) {
            int id = ids.top();
            ids.pop();
            return new USBConnection(id);  
        }
        return nullptr; 
    }
    int get_id() const {
        return id;
    }
    ~USBConnection() {
        ids.push(id);
        std::cout << "USBConnection with ID " << id << " destroyed and ID returned to the stack.\n";
    }
};

#endif 