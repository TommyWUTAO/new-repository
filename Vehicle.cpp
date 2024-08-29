#include "Vehicle.h"

Vehicle::Vehicle(int id) : ID(id) {
    timeOfEntry = std::time(nullptr);  // 初始化进入时间
}

int Vehicle::getID() const {
    return ID;
}

Vehicle::~Vehicle() {
    // 虚析构函数的实现可以为空，或包含你希望进行的任何清理工作
}