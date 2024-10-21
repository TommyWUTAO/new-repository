#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include <tuple>

// Enumeration for different game entity types
enum GameEntityType { ExplosionType, MineType, NoneType, ShipType };

// Base class for all game entities
class GameEntity {
protected:
    std::tuple<int, int> position;
    GameEntityType type;

public:
    // Constructor for GameEntity
    GameEntity(int x, int y, GameEntityType entityType);

    // Function to get the position of the entity
    std::tuple<int, int> getPos() const;

    // Function to get the type of the entity
    GameEntityType getType() const;
};

#endif // GAME_ENTITY_H