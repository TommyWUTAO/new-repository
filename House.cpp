#include "House.h"
#include <iostream>

House::House() : maxAppliances(0), numAppliances(0), appliances(nullptr) {}

House::House(int maxAppliances) : maxAppliances(maxAppliances), numAppliances(0) {
    if (maxAppliances > 0) {
        appliances = new Appliance*[maxAppliances];
    } else {
        appliances = nullptr;
    }
}

House::~House() {
    if (appliances != nullptr) {
        for (int i = 0; i < numAppliances; ++i) {
            delete appliances[i];  
        }
        delete[] appliances;  
    }
}

bool House::addAppliance(Appliance* appliance) {
    if (numAppliances < maxAppliances && appliances != nullptr) {
        appliances[numAppliances++] = appliance;
        return true;
    }
    return false;
}

double House::getTotalPowerConsumption() {
    double totalPowerConsumption = 0.0;
    for (int i = 0; i < numAppliances; ++i) {
        totalPowerConsumption += appliances[i]->getPowerConsumption();
    }
    return totalPowerConsumption;
}