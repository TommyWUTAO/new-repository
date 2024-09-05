#ifndef FORD_H
#define FORD_H

#include <iostream>
#include <string>

#include "Car.h"

using namespace std;

class Ford : public Car
{
protected:
    int badgeNumber;
    float litresOfFuel; // Initially 60L

public:
    Ford();
    Ford(int badgeNumber, int price);
    int get_badgeNumber();
    float get_litresOfFuel();
    void set_badgeNumber(int badgeNumber);
    void set_litresOfFuel(float litresOfFuel);
    void refuel(int litres);
    void drive(int kms);
};

#endif