#include <iostream>
#include "Orchestra.h"

int main() {
    
    Orchestra orchestra(3);
    Musician musician1("Violin", 5);
    Musician musician2("Flute", 3);
    Musician musician3("Piano", 10);
    Musician musician4("Cello", 4);  
    orchestra.add_musician(musician1);
    orchestra.add_musician(musician2);
    orchestra.add_musician(musician3);
    bool added = orchestra.add_musician(musician4);
    if (orchestra.has_instrument("Violin")) {
        std::cout << "The orchestra has a violin player." << std::endl;
    } else {
        std::cout << "No violin player in the orchestra." << std::endl;
    }
    Musician* members = orchestra.get_members();
    for (int i = 0; i < orchestra.get_current_number_of_members(); ++i) {
        std::cout << "Musician " << i + 1 << ": " << members[i].get_instrument() 
                  << " with " << members[i].get_experience() << " years of experience." << std::endl;
    }
    std::cout << members[1].get_experience() << std::endl;

    return 0;
}