#ifndef STORESHELF_H
#define STORESHELF_H

#include "MusicBox.h" // Include MusicBox header, assuming it exists
#include <vector>

class StoreShelf {
private:
    int width;
    int number;
    std::vector<MusicBox> music_boxes;

public:
    StoreShelf();                     // default constructor
    StoreShelf(int width);            // constructor for shelf with given width in centimetres

    int get_width();                  // returns the width of the shelf in centimetres
    int get_num_music_boxes();        // returns the number of Music boxes currently on the shelf
    MusicBox* get_contents();         // returns a dynamic array of the music boxes currently on the shelf
    bool add_music_box(MusicBox a_music_box); // adds music box to shelf if there is sufficient space

    ~StoreShelf(); // destructor
};

#endif