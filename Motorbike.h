#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike : public Vehicle {
public:
    Motorbike(int id) : Vehicle(id) {}

    int getParkingDuration() const override;  // 声明时不需要实现
};

#endif