#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"

// Ship class that inherits from GameEntity
class Ship : public GameEntity {
public:
    // Constructor for Ship
    Ship(int x, int y);

    // Move function to update the position of the ship
    void move(int dx, int dy);
};

#endif // SHIP_H