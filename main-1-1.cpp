#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <thread> 
#include <chrono> 

int main() {
    Car car(1);

    std::cout << "Car parking dura";
    Bus bus(2);
    Motorbike bike(3);

    std::cout << "Car parking duration: " << car.getParkingDuration() << " seconds" << std::endl;
    std::cout << "Bus parking duration: " << bus.getParkingDuration() << " seconds" << std::endl;
    std::cout << "Motorbike parking duration: " << bike.getParkingDuration() << " seconds" << std::endl;

    return 0;
}