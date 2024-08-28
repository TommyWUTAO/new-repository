#include<iostream>
#include"ParkingLot.h"
ParkingLot::ParkingLot(int capacity):miximum(capacity){}
ParkingLot::~ParkingLot(){}
int ParkingLot::getCount(){
    int currentnumber = vehicles.size();
    return currentnumber;
}
bool ParkingLot::parkVehicle(Vehicle* vehicle)
{
    if(vehicles.size()<miximum)
    {
        vehicles.push_back(vehicle);
        return true;
    }
    else{
        std::cout<<"The lot is full"<<std::endl;
        return false;
    }
}

bool ParkingLot::unparkVehicle(int ID)
{

    for(int i =0;i<vehicles.size();i++)
    {
        if(vehicles[i]->getID()==ID){
            delete vehicles[i];
            vehicles[i] = vehicles.back();
            vehicles.pop_back();
            return true;
        }
        
    }
    std::cout << "Vehicle not in the lot" << std::endl;
        return false;
}