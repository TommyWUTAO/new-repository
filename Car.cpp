#include "Car.h"
#include <ctime>

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration() const {  // 添加 const 修饰符
    std::time_t now = std::time(nullptr);
    int duration = static_cast<int>(difftime(now, timeOfEntry));
    return static_cast<int>(duration * 0.9); // 10% reduction
}