#include<iostream>
#include"Musician.h"
int main()
{
    Musician play1 ("piano",10);
    std::cout<<play1.get_instrument()<<"  "<<play1.get_experience();
}