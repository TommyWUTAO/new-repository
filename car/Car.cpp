#include <iostream>
#include <string>

#include "Car.h"

using namespace std;

// Constructors
Car::Car(int price) : price(price), emissions(0) {}
Car::Car() : price(0), emissions(0) {}

// Getters
int Car::get_price() 
{ 
    return price;
}
int Car::get_emissions() 
{ 
    return emissions; 
}

// Setters
void Car::set_price(int price) 
{ 
    this->price = price; 
}
void Car::set_emissions(int emissions)
 { 
    this->emissions = emissions; 
}

// Methods
void Car::drive(int kms)
 { 
    emissions = 20 * kms; 
}