#include "Tesla.h"
Tesla::Tesla(char model, int price):model(model),Car(price),batteryPercentage(0.0){}
Tesla::Tesla():model(model),Car(price),batteryPercentage(0.0){}
char Tesla::get_model()
{
    return model;
}
float Tesla::get_batteryPercentage()
{
    return batteryPercentage;
}
void Tesla::set_model(char model)
{
    this->model=model;
}
void Tesla::set_batteryPercentage(float batteryPercentage)
{
    this->batteryPercentage=batteryPercentage;
}
void Tesla::chargeBattery(int mins)
{
    if (batteryPercentage + (mins * 0.5) <= 100.0)
    {
        batteryPercentage += mins * 0.5;
    }
    else
    {
        batteryPercentage = 100.0;
    }
}
void Tesla::drive(int kms)
{
    if (batteryPercentage != 0)
    {
        if (batteryPercentage - kms / 5.0 < 0)
        {
            emissions = 37000;
            batteryPercentage = 0.0;
        }
        else
        {
            emissions += 74 * kms;
            batteryPercentage -= kms / 5.0;
        }
    }
}