#include"Vehicle.h"
#include"Car.h"
Car::Car(int ID):Vehicle(ID){}
int Car::getparkingduration()
{
    int durationtime = (std::time_t(nullptr)-timeofenter)*0.9;
    return durationtime;
}