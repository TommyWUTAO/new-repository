#include<iostream>
#include"Musician.h"
int main()
{
    Musician musician1("Guitar", 5);
    std::cout << "Instrument: " << musician1.get_instrument() << std::endl;
    std::cout << "Experience: " << musician1.get_experience() << " years" << std::endl;
}