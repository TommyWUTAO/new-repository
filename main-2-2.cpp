#include<iostream>
#include"TV.h"
int main ()
{
    TV* tv = new TV(100,50);
    std::cout<<tv->getPowerConsumption();
    
}