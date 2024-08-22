#include "StoreShelf.h"
StoreShelf::StoreShelf() : width(0), number(0) {}
StoreShelf::StoreShelf(int width) : width(width), number(0) {}
int StoreShelf::get_width() {
    return width;
}
int StoreShelf::get_num_music_boxes() {
    return number;
}
MusicBox* StoreShelf::get_contents() {
    MusicBox* contents = new MusicBox[number];
    for (int i = 0; i < number; ++i) {
        contents[i] = music_boxes[i];
    }
    return contents;
}
bool StoreShelf::add_music_box(MusicBox a_music_box) {
    int current_width = 0;
    for (size_t i = 0; i < music_boxes.size(); ++i) {
        current_width += music_boxes[i].get_width();
    }
    if (current_width + a_music_box.get_width() <= width) {
        music_boxes.push_back(a_music_box);
        number++;  
        return true;
    } else {
        return false;
    }
}
StoreShelf::~StoreShelf() {}
