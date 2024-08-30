#include"Vehicle.h"
#include"Bus.h"
    bus::bus(int ID):Vehicle(ID){}
int bus::getparkingduration()
{
    int durationtime = (std::time_t(nullptr)-timeofenter)*0.75;
    return durationtime;
}