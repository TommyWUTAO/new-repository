#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <utility>

class GridItem {
private:
    static int activeGridItemCount; // Static count of active GridItem objects
    int x, y, width, height;

public:
    // Default constructor
    GridItem() : x(0), y(0), width(0), height(0) {
        activeGridItemCount++;
    }

    // Parameterized constructor
    GridItem(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {
        activeGridItemCount++;
    }

    // Destructor
    virtual ~GridItem() {
        activeGridItemCount--;
    }

    // Set coordinates
    void setCoordinates(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Get coordinates
    std::pair<int, int> getCoordinates() {
        return {x, y};
    }

    // Get grid width
    int getGridWidth() {
        return width;
    }

    // Get grid height
    int getGridHeight() {
        return height;
    }

    // Get active GridItem count
    static int getActiveGridItemCount() {
        return activeGridItemCount;
    }
};

// Initialize static member
int GridItem::activeGridItemCount = 0;

#endif // GRIDITEM_HPP