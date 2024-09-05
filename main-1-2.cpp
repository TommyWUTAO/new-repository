#include "StoreShelf.h"
#include "MusicBox.h"
#include <iostream>

int main() {

    StoreShelf shelf1;
    std::cout << "Shelf 1 Width: " << shelf1.get_width() << std::endl;
    std::cout << "Shelf 1 Num Music Boxes: " << shelf1.get_num_music_boxes() << std::endl;


    StoreShelf shelf2(100);
    std::cout << "Shelf 2 Width: " << shelf2.get_width() << std::endl;
    std::cout << "Shelf 2 Num Music Boxes: " << shelf2.get_num_music_boxes() << std::endl;

    
    return 0;
}
