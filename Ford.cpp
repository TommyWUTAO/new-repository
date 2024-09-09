#include"Ford.h"
Ford::Ford():badgeNumber(0),Car(0),litresOfFuel(0.0){}
Ford::Ford(int badgeNumber, int price):badgeNumber(0),Car(price),litresOfFuel(0.0){}
int Ford::get_badgeNumber()
{
    return badgeNumber;
}
float Ford::get_litresOfFuel() 
{
    return litresOfFuel;
}
void Ford::set_badgeNumber(int badgeNumber)
{
    this->badgeNumber=badgeNumber;
}
void Ford::set_litresOfFuel(float litresOfFuel)
{
    this->litresOfFuel=litresOfFuel;
}
void Ford::refuel(int litres)
{
    if (litresOfFuel + litres <= 60.0)
    {
        litresOfFuel += litres;
    }
    else
    {
        litresOfFuel = 60.0;
    }
}
void Ford::drive(int kms)
{
    if (litresOfFuel != 0)
    {
        if (litresOfFuel - kms / 5.0 < 0)
        {
            emissions = 70200;
            litresOfFuel = 0.0;
        }
        else
        {
            emissions += 234 * kms;
            litresOfFuel -= kms / 5.0;
        }
    }
}