#include"House.h"
House::House():maxAppliances(0),numAppliances(0),appliances(nullptr){}
House::House(int maxAppliances):maxAppliances(maxAppliances),numAppliances(0),appliances(nullptr){}
House::~House(){}
bool House::addAppliance(Appliance* appliance) {
    if (numAppliances < maxAppliances) {
        appliances[numAppliances++] = appliance;
        return true;
    }
    return false;
}
double House::getTotalPowerConsumption()  {
    double totalPowerConsumption = 0.0;
    for (int i = 0; i < numAppliances; ++i) {
        totalPowerConsumption += appliances[i]->getPowerConsumption();
    }
    return totalPowerConsumption;
}