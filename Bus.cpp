#include "Bus.h"

Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration() override {
    int duration = (std::time(nullptr) - timeOfEntry) * 0.75;
    return duration;
}