#include<iostream>
#include"Appliance.h"
using namespace std;
int main ()
{
    Appliance myAppliance;
    myAppliance.turnOn();

    myAppliance.set_powerRating(100);
    cout << "Power Rating after setting: " << myAppliance.get_powerRating() << endl;
    cout << "Power Consumption: " << myAppliance.getPowerConsumption() << endl;
    myAppliance.turnOff();


    return 0;
}