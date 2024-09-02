#include"House.h"
House::House():maxAppliances(0),numAppliances(0){}
House::House(int maxAppliances):maxAppliances(maxAppliances),numAppliances(0){}
House::~House() {}
bool House::addAppliance(Appliance* appliance) {
    if (numAppliances < maxAppliances) {
        appliances.push_back(appliance);
        numAppliances++;
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