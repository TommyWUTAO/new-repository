#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include <tuple>

enum GameEntityType { ExplosionType, MineType, NoneType, ShipType };

class GameEntity {
protected:
    std::tuple<int, int> position;
    GameEntityType type;

public:
    GameEntity(int x, int y, GameEntityType entityType) 
        : position(x, y), type(entityType) {}

    std::tuple<int, int> getPos() const {
        return position;
    }

    GameEntityType getType() const {
        return type;
    }
};

#endif // GAME_ENTITY_H