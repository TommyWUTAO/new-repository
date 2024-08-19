#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <string>
class Musician
{
    private:
    std::string instrument;
    int experience;
    public:
    Musician();

    // Constructor with parameters
    Musician(std::string instrument, int experience);

    // Getter for instrument
    std::string get_instrument();

    // Getter for experience
    int get_experience();

    
};
#endif
