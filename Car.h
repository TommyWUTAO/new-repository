#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(int id) : Vehicle(id) {}

    int getParkingDuration() const override {
        return static_cast<int>((std::time(nullptr) - timeOfEntry) * 0.9);
    }
};

#endif