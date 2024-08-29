#include "Motorbike.h"
#include <ctime>

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration() const {  // 添加 const 修饰符
    std::time_t now = std::time(nullptr);
    int duration = static_cast<int>(difftime(now, timeOfEntry));
    return static_cast<int>(duration * 0.85); // 15% reduction
}