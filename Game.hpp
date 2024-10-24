#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <vector>
#include <utility>
#include "Robot.hpp"
#include "Goal.hpp"
#include "Obstacle.hpp"

enum GameState { WIN, LOSE, PLAYING };

class Game {
private:
    int width, height;
    Robot player;
    Goal goal;
    std::vector<Obstacle> obstacles;
    GameState state;

public:
    // Constructor
    Game(int width, int height, std::vector<std::pair<int, int>> obstacleCoordinates)
        : width(width), height(height), player(width, height), goal(width, height), state(PLAYING) {
        // Place obstacles
        for (const auto& coord : obstacleCoordinates) {
            // Assuming you want to place obstacles with a width and height of 1
            obstacles.emplace_back(coord.first, coord.second, 1, 1); // Correctly providing 4 parameters
        }
    }

    // Other methods...
};

#endif // GAME_HPP