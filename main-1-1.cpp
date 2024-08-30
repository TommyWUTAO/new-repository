#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"


int main() {
    Car car(1);

    std::cout << "Car parking dura";
    bus bus(2);
    Motorbike bike(3);

    std::cout << "Car parking duration: " << car.getparkingduration() << " seconds" << std::endl;
    std::cout << "Bus parking duration: " << bus.getparkingduration() << " seconds" << std::endl;
    std::cout << "Motorbike parking duration: " << bike.getparkingduration() << " seconds" << std::endl;

    return 0;
}