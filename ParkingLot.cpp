
#include<iostream>
#include"ParkingLot.h"
int ParkingLot::getcount(){
    return vehicles.size();
}
ParkingLot::ParkingLot(int capacity):capacity(capacity),current(0){}
bool ParkingLot::parkVehicle(Vehicle* vehicle)
{
    if(current<capacity)
    {
        vehicles.push_back(vehicle);
        return true;
    }
    return false;
}
bool ParkingLot::unparkVehicle(int ID)
{
    for(size_t i =0;i<vehicles.size();i++)
    {
        if(vehicles[i]->getID()==ID)
        {
            delete vehicles[i];
          vehicles[i] = vehicles.back();
          vehicles.pop_back();
          return true;
        }
    }
    return false;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration)
 {
    int count = 0;
        

        for(size_t i = 0; i < vehicles.size(); i++) {
            Vehicle* vehicle = vehicles[i];
            int parkingDuration = vehicle->getparkingduration();

            if (parkingDuration > maxParkingDuration) {
                count++;
            }
        }

        return count;
}
ParkingLot::~ParkingLot(){

}