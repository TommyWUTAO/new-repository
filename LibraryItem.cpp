#include "library.h"

// Corrected Constructor Initialization List
LibraryItem::LibraryItem(int id, const std::string& title)
    : itemID(id), title(title), isBorrowed(false) {}

// Method Implementations
void LibraryItem::borrowItem() {
    isBorrowed = true;
}

void LibraryItem::returnItem() {
    isBorrowed = false;
}

std::string LibraryItem::getTitle() const {
    return title;
}

int LibraryItem::getItemID() const {
    return itemID;
}

bool LibraryItem::isAvailable() const {
    return !isBorrowed;
}