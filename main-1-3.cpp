#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <thread> 
#include <chrono> 


int main() {

    ParkingLot lot(10);
    Vehicle* car1 = new Car(1);
    Vehicle* bus1 = new Bus(2);
    Vehicle* motorbike1 = new Motorbike(3);
    int overstayingVehicle = lot.countOverStayingVehicle(2);
    std::cout << "Number of vehicles parked for more than 15 seconds: " << overstayingVehicle << std::endl;

}