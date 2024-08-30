#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include<string>
#include<vector>
#include "Vehicle.h"
class ParkingLot {
    
    private:
    int capacity;
    std::vector<Vehicle*> vehicles;
    int current;
    public:
    ParkingLot(int capacity);
    int getcount();
    bool parkVehicle(Vehicle* vehicle);
    bool unparkVehicle(int ID);
    int countOverstayingVehicles(int maxParkingDuration);
    ~ParkingLot();
};
#endif