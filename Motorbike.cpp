
#include "Motorbike.h"

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration() const{
    int duration = (std::time(nullptr) - timeOfEntry) * 0.85;
    return duration;
    
}