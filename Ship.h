#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"

class Ship : public GameEntity {
public:
    Ship(int x, int y) : GameEntity(x, y, ShipType) {}

    void move(int dx, int dy) {
        int x = std::get<0>(position);
        int y = std::get<1>(position);
        position = std::make_tuple(x + dx, y + dy);
    }
};

#endif // SHIP_H