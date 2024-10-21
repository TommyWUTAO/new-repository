#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"

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
            auto [x, y] = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Ship(x, y));
        }
        for (int i = 0; i < numMines; ++i) {
            auto [x, y] = Utils::generateRandomPos(gridWidth, gridHeight);
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
                            std::cout << "Ship destroyed by explosion at mine!" << std::endl;
                        }
                    }
                }
            }
            iteration++;
        }
    }
};

#endif // GAME_H