#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle {
public:
    Bus(int id) : Vehicle(id) {}

    int getParkingDuration() const override {
        return static_cast<int>((std::time(nullptr) - timeOfEntry) * 0.75);
    }
};

#endif