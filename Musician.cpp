#include "Musician.h"

Musician::Musician():instrument("NULL"),experience(0){};
Musician::Musician(std::string instrument, int experience):instrument(instrument),experience(experience){}

std::string Musician::get_instrument()
{
    return instrument;
}
int Musician::get_experience()
{
    return experience;
}
