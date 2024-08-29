#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(int id);
    int getParkingDuration() const ; // 实现虚函数
};

#endif // CAR_H