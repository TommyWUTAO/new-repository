#ifndef HOUSE_H
#define HOUSE_H
#include"Appliance.h"
#include"Fridge.h"
#include"TV.h"
#include<vector>
class House{
private:
    std::vector<Appliance*> appliances; 
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