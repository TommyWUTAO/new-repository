#include"Vehicle.h"
Vehicle::Vehicle(int ID):ID(ID)
{
    timeofenter = std::time_t(nullptr);
}
int Vehicle::getID()
{
    return ID;
}
