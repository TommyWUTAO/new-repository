#ifndef GAME_H
#define GAME_H

#include <vector>
#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"

// Game class to manage entities and game simulation
class Game {
private:
    std::vector<GameEntity*> entities;  // Vector of game entities

public:
    // Get all entities
    std::vector<GameEntity*> get_entities() const;

    // Set all entities
    void set_entities(const std::vector<GameEntity*>& new_entities);

    // Initialize the game by creating random ships and mines
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight);

    // Main game loop
    void gameLoop(int maxIterations, double mineDistanceThreshold);
};

#endif // GAME_H