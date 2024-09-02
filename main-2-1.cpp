#include <iostream>
#include "Fridge.h"

using namespace std;

int main() {
    Fridge myFridge(150, 250); 
    myFridge.turnOn();
    cout << "Power Rating: " << myFridge.get_powerRating() << endl;
    cout << "Volume: " << myFridge.getVolume() << " litres" << endl;
    cout << "Power Consumption: " << myFridge.getPowerConsumption() << " kWh/day" << endl;

    return 0;
}