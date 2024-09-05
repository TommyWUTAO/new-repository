#include <iostream>
#include "MusicBox.h"

int main() {
  
    MusicBox box1;
    std::cout << "Default Constructor: " << std::endl;
    std::cout << "Song: " << box1.get_song() << ", Width: " << box1.get_width() << " cm" << std::endl;

  
    MusicBox box2("Fur Elise", 15);
    std::cout << "\nParameterized Constructor: " << std::endl;
    std::cout << "Song: " << box2.get_song() << ", Width: " << box2.get_width() << " cm" << std::endl;

    return 0;
}