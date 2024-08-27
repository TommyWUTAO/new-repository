#ifndef S_H
#define S_H

#include <ctime>
#include <iostream>

class Vehicle
{
    protected:
    std::time_t timeOfEntry;
    int ID;
    public:
    Vehicle(int id) : ID(id) {
        timeOfEntry = std::time(nullptr); 
    }
    int getID() {
        return ID;
    }
};

class Car : public Vehicle
{
    public:
    Car(int id) : Vehicle(id) {} 
    int getParkingDuration() {
        int duration = (std::time(nullptr) - timeOfEntry) * 0.9;
        return duration;
    }
};

class Bus : public Vehicle
{
    public:
    Bus(int id) : Vehicle(id) {} 
    int getParkingDuration() {
        int duration = (std::time(nullptr) - timeOfEntry) * 0.75;
        return duration;
    }
};

class Motorbike : public Vehicle
{
    public:
    Motorbike(int id) : Vehicle(id) {} 
    int getParkingDuration() {
        int duration = (std::time(nullptr) - timeOfEntry) * 0.85;
        return duration;
    }
};

#endif