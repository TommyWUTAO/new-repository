#ifndef HOUSE_H
#define HOUSE_H
#include"Appliance.h"
#include"Fridge.h"
#include"TV.h"
class House{
private:
    Appliance** appliances; 
    int numAppliances;      
    int maxAppliances;
public:
    House();
    House(int maxAppliances);
    ~House();
    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption();
};
#endif