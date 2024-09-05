#ifndef FLEET_H
#define FLEET_H

#include <iostream>
#include <string>

#include "Car.h"
#include "Tesla.h"
#include "Ford.h"

using namespace std;

class Fleet : public Car
{
private:
    Car** fleet;

public:
    Fleet();
    Car** get_fleet();
};

#endif