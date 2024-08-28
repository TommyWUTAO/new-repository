#include "Motorbike.h"

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration() override{
    int duration = (std::time(nullptr) - timeOfEntry) * 0.85;
    return duration;
}