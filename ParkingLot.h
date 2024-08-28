#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include<string>
#include<vector>
#include "Vehicle.h"
class ParkingLot {
    private:
    int miximum;
    std::vector<Vehicle*> vehicles;
    public:
    ParkingLot(int capacity);
    ~ParkingLot();
    int getCount();
    bool parkVehicle(Vehicle* vehicle);
    bool unparkVehicle(int ID);
   
};
#endif