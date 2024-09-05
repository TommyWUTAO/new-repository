#ifndef TESLA_H
#define TESLA_H

#include <iostream>
#include <string>

#include "Car.h"


using namespace std;

class Tesla : public Car
{
protected:
    char model;
    float batteryPercentage; // Initially 100%

public:
    Tesla(char model, int price);
    Tesla();
    char get_model();
    float get_batteryPercentage();
    void set_model(char model);
    void set_batteryPercentage(float batteryPercentage);
    void chargeBattery(int mins);
    void drive(int kms);
};

#endif