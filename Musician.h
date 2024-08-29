#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <string>
class Musician{
    private:
    std::string use_instrument;
    int use_experience;
    public:
    Musician();                  // a default constructor 
    Musician(std::string instrument, int experience);      
    std::string get_instrument();    // returns the instrument played
    int get_experience();       // returns the number of years experience
};
#endif
