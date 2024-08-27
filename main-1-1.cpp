#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <thread> 
#include <chrono> 

int main() {
    Car car(1);
    std::this_thread::sleep_for(std::chrono::seconds(2)); 
    Bus bus(2);
    std::this_thread::sleep_for(std::chrono::seconds(3)); 
    Motorbike bike(3);
    std::this_thread::sleep_for(std::chrono::seconds(1)); 

    std::cout << "Car parking duration: " << car.getParkingDuration() << " seconds" << std::endl;
    std::cout << "Bus parking duration: " << bus.getParkingDuration() << " seconds" << std::endl;
    std::cout << "Motorbike parking duration: " << bike.getParkingDuration() << " seconds" << std::endl;

    return 0;
}