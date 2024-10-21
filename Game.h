#ifndef GAME_H
#define GAME_H

#include <vector>
#include <iostream>  // Added for std::cout and std::endl
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"
#include "GameEntity.h"

class Game {
private:
    std::vector<GameEntity*> entities;  // Vector of game entities

public:
    std::vector<GameEntity*> get_entities() const {
        return entities;
    }

    void set_entities(const std::vector<GameEntity*>& new_entities) {
        entities = new_entities;
    }

    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
        for (int i = 0; i < numShips; ++i) {
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            int x = std::get<0>(pos);
            int y = std::get<1>(pos);
            entities.push_back(new Ship(x, y));
        }
        for (int i = 0; i < numMines; ++i) {
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            int x = std::get<0>(pos);
            int y = std::get<1>(pos);
            entities.push_back(new Mine(x, y));
        }
        return entities;
    }

    void gameLoop(int maxIterations, double mineDistanceThreshold) {
        int iteration = 0;
        while (iteration < maxIterations) {
            for (auto entity : entities) {
                // If it's a Ship, move it
                Ship* ship = dynamic_cast<Ship*>(entity);
                if (ship) {
                    ship->move(1, 0);  // Move ships to the right
                }

                // Check proximity to mines
                for (auto otherEntity : entities) {
                    Mine* mine = dynamic_cast<Mine*>(otherEntity);
                    if (mine && ship) {
                        if (Utils::calculateDistance(ship->getPos(), mine->getPos()) < mineDistanceThreshold) {
                            Explosion explosion = mine->explode();
                            explosion.apply(*ship);  // Destroy the ship
                           
                        }
                    }
                }
            }
            iteration++;
        }
    }
};

#endif // GAME_H