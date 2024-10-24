#ifndef ROBOT_HPP
#define ROBOT_HPP

#include "GridItem.hpp"

class Robot : public GridItem {
private:
    int health;

public:
    // Constructor
    Robot(int gridWidth, int gridHeight) : GridItem(0, 0, gridWidth, gridHeight), health(3) {}

    // Get current health
    int getHealth() {
        return health;
    }

    // Take hit
    void takeHit() {
        if (health > 0) health--;
    }

    // Move the robot
    bool move(int xOffset, int yOffset) {
        if ((xOffset != 0 && yOffset != 0) || (xOffset == 0 && yOffset == 0)) {
            return false; // Invalid move
        }
        int newX = getCoordinates().first + xOffset;
        int newY = getCoordinates().second + yOffset;

        // Check bounds
        if (newX >= 0 && newX < getGridWidth() && newY >= 0 && newY < getGridHeight()) {
            setCoordinates(newX, newY);
            return true;
        }
        return false;
    }
};

#endif // ROBOT_HPP