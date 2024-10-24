#ifndef GAME_HPP
#define GAME_HPP
#include<utility>
#include"Robot.hpp"
#include"Goal.hpp"
#include"GridItem.hpp"
#include"Helper.hpp"
#include"Interactable.hpp"
#include"Obstacle.hpp"
#include<vector>
enum GameState { WIN, LOSE, PLAYING };

class Game {
private:
    int width, height;
    Robot player;
    Goal goal;
    std::vector<Obstacle> obstacles;
    GameState gameState;

public:
    Game(int width, int height, std::vector<std::pair<int, int>> obstacleCoordinates)
        : width(width), height(height), player(width, height), goal(width, height), gameState(PLAYING) {
        
        for (const auto& coord : obstacleCoordinates) {
            obstacles.emplace_back(coord.first, coord.second, width, height);
        }
    }

    void movePlayer(int dx, int dy) {
        if (gameState != PLAYING) return;

        if (player.move(dx, dy)) {
            // Check if player reached the goal
            if (goal.interact(&player)) {
                gameState = WIN;
            } else {
                // Check for obstacle collisions
                for (auto& obstacle : obstacles) {
                    if (!obstacle.interact(&player)) {
                        gameState = LOSE;
                        break;
                    }
                }
            }
        }
    }

    void printGrid() const {
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                if (player.getCoordinates() == std::make_pair(j, i)) {
                    std::cout << "P";
                } else if (goal.getCoordinates() == std::make_pair(j, i)) {
                    std::cout << "G";
                } else {
                    bool obstacleHere = false;
                    for (const auto& obstacle : obstacles) {
                        if (obstacle.getCoordinates() == std::make_pair(j, i)) {
                            std::cout << "O";
                            obstacleHere = true;
                            break;
                        }
                    }
                    if (!obstacleHere) std::cout << "_";
                }
            }
            std::cout << std::endl;
        }
    }

    bool displayState() const {
        switch (gameState) {
            case WIN:
                std::cout << "You win!\n";
                return true;
            case LOSE:
                std::cout << "You lose :(\n";
                return true;
            case PLAYING:
                std::cout << "Game on\n";
                return false;
        }
        return false;
    }
};
#endif