 #include"Musician.h"
    Musician:: Musician(): use_instrument("null"),use_experience(0){}           // a default constructor 
    Musician::Musician(std::string instrument, int experience):use_instrument(instrument),use_experience(experience){}   
    std::string Musician::get_instrument(){
        return use_instrument;
    }    // returns the instrument played
    int Musician::get_experience()
    {
        return use_experience;
    }       // returns the number of years experience
