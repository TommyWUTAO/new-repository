#include "Bus.h"
#include <ctime>

Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration() const {  // 添加 const 修饰符
    std::time_t now = std::time(nullptr);
    int duration = static_cast<int>(difftime(now, timeOfEntry));
    return static_cast<int>(duration * 0.75); // 25% reduction
}