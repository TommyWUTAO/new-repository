#include <iostream>
#include "House.h"
#include "TV.h"
#include "Fridge.h"

using namespace std;

int main() {
    House myHouse(3); 
    TV* myTV = new TV(150, 55); 
    Fridge* myFridge = new Fridge(200, 300);
    if (myHouse.addAppliance(myTV)) {
        cout << "TV added to the house." << endl;
    } else {
        cout << "Failed to add TV to the house." << endl;
    }

    if (myHouse.addAppliance(myFridge)) {
        cout << "Fridge added to the house." << endl;
    } else {
        cout << "Failed to add Fridge to the house." << endl;
    }
    cout << "Total Power Consumption: " << myHouse.getTotalPowerConsumption() << " W" << endl;

    return 0;
}