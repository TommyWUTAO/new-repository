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
            if (coord.first != player.getCoordinates().first || coord.second != player.getCoordinates().second) {
                if (coord != goal.getCoordinates()) {
                    obstacles.emplace_back(coord.first, coord.second);
                }
            }
        }
    }

    // Display the current game state
    bool displayState() {
        switch (state) {
            case WIN:
                std::cout << "You win!" << std::endl;
                return true;
            case LOSE:
                std::cout << "You lose :(" << std::endl;
                return true;
            case PLAYING:
                std::cout << "Game on" << std::endl;
                return false;
        }
        return false;
    }

    // Move the player
    void movePlayer(int dx, int dy) {
        if (state == PLAYING) {
            if (player.move(dx, dy)) {
                // Check for win condition
                if (player.getCoordinates() == goal.getCoordinates()) {
                    state = WIN;
                }
                // Check for obstacles
                for (auto& obstacle : obstacles) {
                    if (obstacle.interact(&player)) {
                        state = LOSE; // Player loses if they hit an obstacle
                    }
                }
            }
        }
    }

    // Print the grid
    void printGrid() {
        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                if (x == player.getCoordinates().first && y == player.getCoordinates().second) {
                    std::cout << 'P'; // Player
                } else if (x == goal.getCoordinates().first && y == goal.getCoordinates().second) {
                    std::cout << 'G'; // Goal
                } else {
                    bool isObstacle = false;
                    for (const auto& obstacle : obstacles) {
                        if (obstacle.getCoordinates() == std::make_pair(x, y)) {
                            std::cout << 'O'; // Obstacle
                            isObstacle = true;
                            break;
                        }
                    }
                    if (!isObstacle) {
                        std::cout << '_'; // Empty space
                    }
                }
            }
            std::cout << std::endl;
        }
    }
};

#endif // GAME_HPP