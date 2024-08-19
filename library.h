#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <string>

class LibraryItem {
private:
    int itemID;
    std::string title;
    bool isBorrowed;

public:
    // Constructor
    LibraryItem(int id, const std::string& title);

    // Destructor
    ~LibraryItem();

    // Methods
    void borrowItem();
    void returnItem();
    std::string getTitle() const;
    int getItemID() const;
    bool isAvailable() const;
};

#endif