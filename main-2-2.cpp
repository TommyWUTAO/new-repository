#include<iostream>
#include"TV.h"
int main ()
{
    TV tv(100,50);
    tv.turnOn();
    std::cout<<tv.getPowerConsumption();
}