#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
protected:
    std::time_t timeOfEntry;
    int ID;

public:
    Vehicle(int id) : ID(id), timeOfEntry(std::time(nullptr)) {}

    virtual ~Vehicle() = default;

    int getID() const { return ID; }

    std::time_t getTimeOfEntry() const { return timeOfEntry; }

    
    virtual int getParkingDuration() const = 0;
};

#endif