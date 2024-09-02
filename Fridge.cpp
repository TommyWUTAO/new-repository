#include"Fridge.h"
Fridge::Fridge():Volume(0.0),Appliance(){}
Fridge::Fridge(int powerRating,double volume):Volume(volume),Appliance(powerRating){}
void Fridge::setVolume(double volume)
{
    Volume=volume;
}
double Fridge::getVolume(){
    return Volume;
}
double Fridge::getPowerConsumption(){
    return get_powerRating() * 24 * (Volume / 100);
}