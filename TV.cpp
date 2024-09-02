#include"TV.h"
TV::TV():Appliance(),TVscreenSize(0.0){}
TV::TV(int powerRating, double screenSize):Appliance(powerRating),TVscreenSize(screenSize){}
void TV::setScreenSize(double screenSize)
{
    TVscreenSize=screenSize;
}
double TV::getScreenSize(){
    return TVscreenSize;
}
double TV::getPowerConsumption(){
    return get_powerRating() * (TVscreenSize / 10);
}