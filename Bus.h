#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class bus:public Vehicle
{
    public:
    bus(int ID);
    int getparkingduration();
};

#endif 