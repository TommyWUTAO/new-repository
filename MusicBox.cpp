#include <iostream>
#include <string>
#include "MusicBox.h"


MusicBox::MusicBox() : song(""), width(0) {}

MusicBox::MusicBox(std::string songname, int width) : song(songname), width(width) {}

std::string MusicBox::get_song() {
    return song;
}

int MusicBox::get_width() {
    return width;
}

MusicBox::~MusicBox() {}