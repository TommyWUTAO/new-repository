#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <vector>
#include <utility>

class Robot {
public:
    int x, y; // Robot's position

    Robot() : x(0), y(0) {} // Initialize Robot at (0, 0)
};

class Obstacle {
public:
    int x, y; // Obstacle's position

    Obstacle(int x, int y) : x(x), y(y) {}
};

enum GameState { WIN, LOSE, PLAYING };

class Game {
private:
    int width, height;
    Robot player;
    std::pair<int, int> goal;
    std::vector<Obstacle> obstacles;
    GameState state;

public:
    // Constructor
    Game(int width, int height, std::vector<std::pair<int, int>> obstacleCoordinates)
        : width(width), height(height), goal(width - 1, height - 1), state(PLAYING) {
        // Place obstacles
        for (const auto& coord : obstacleCoordinates) {
            if (coord.first != player.x || coord.second != player.y) {
                if (coord != goal) {
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
            // Calculate new position
            int newX = player.x + dx;
            int newY = player.y + dy;

            // Check boundaries
            if (newX < 0 || newX >= width || newY < 0 || newY >= height) {
                std::cout << "Move out of bounds!" << std::endl;
                return;
            }

            // Check for obstacles
            for (const auto& obstacle : obstacles) {
                if (obstacle.x == newX && obstacle.y == newY) {
                    std::cout << "Hit an obstacle!" << std::endl;
                    state = LOSE; // Player loses if they hit an obstacle
                    return;
                }
            }

            // Move the player
            player.x = newX;
            player.y = newY;

            // Check for win condition
            if (player.x == goal.first && player.y == goal.second) {
                state = WIN;
            }
        }
    }

    // Print the grid
    void printGrid() {
        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                if (x == player.x && y == player.y) {
                    std::cout << 'P'; // Player
                } else if (x == goal.first && y == goal.second) {
                    std::cout << 'G'; // Goal
                } else {
                    bool isObstacle = false;
                    for (const auto& obstacle : obstacles) {
                        if (obstacle.x == x && obstacle.y == y) {
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