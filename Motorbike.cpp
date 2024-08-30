#include"Vehicle.h"
#include"Motorbike.h"
Motorbike::Motorbike(int ID):Vehicle(ID){}
int Motorbike::getparkingduration()
{
    int durationtime = (std::time_t(nullptr)-timeofenter)*0.85;
    return durationtime;
}