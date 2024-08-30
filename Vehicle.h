#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>
class Vehicle
{
    protected:
    std::time_t timeofenter;
    int ID;
    public:
    Vehicle(int ID);
    int getID();
    virtual int getparkingduration() =0;
};
#endif 