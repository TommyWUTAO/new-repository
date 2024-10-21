#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple>

enum GameEntityType { ExplosionType, MineType, NoneType, ShipType };

class GameEntity {
protected:
    std::tuple<int, int> position;
    GameEntityType type;

public:
    GameEntity(int x, int y, GameEntityType type) 
        : position(std::make_tuple(x, y)), type(type) {}

    virtual ~GameEntity() = default; 

    std::tuple<int, int> getPos() const {
        return position;
    }

    GameEntityType getType() const {
        return type;
    }
};

#endif // GAMEENTITY_H