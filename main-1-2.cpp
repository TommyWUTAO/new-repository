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
    Vehicle* car2 = new Car(4);
    std::cout << "Parking car1: " << (lot.parkVehicle(car1) ? "Success" : "Failed") << std::endl;
    std::cout << "Parking bus1: " << (lot.parkVehicle(bus1) ? "Success" : "Failed") << std::endl;
    std::cout << "Parking motorbike1: " << (lot.parkVehicle(motorbike1) ? "Success" : "Failed") << std::endl;
    std::cout << "Parking car2 (should fail): " << (lot.parkVehicle(car2) ? "Success" : "Failed") << std::endl;
    std::cout << "Current vehicle count: " << lot.getCount() << std::endl;
    std::cout << "Unparking vehicle with ID 2 (bus1): " << (lot.unparkVehicle(2) ? "Success" : "Failed") << std::endl;
    std::cout << "Parking car2 again (should succeed): " << (lot.parkVehicle(car2) ? "Success" : "Failed") << std::endl;
    std::cout << "Final vehicle count: " << lot.getCount() << std::endl;

    return 0;
}