#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle {
public:
    Bus(int id);
    int getParkingDuration() const ; // 实现虚函数
};

#endif // BUS_H