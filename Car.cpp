
#include "Car.h"

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration() {
    int duration = (std::time(nullptr) - timeOfEntry) * 0.9;
    return duration;
}