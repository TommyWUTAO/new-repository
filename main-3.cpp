#include <iostream>
#include <vector>
#include "Game.hpp"

int main() {
    // Create a game with a 4x4 grid and one obstacle at (2,2)
    std::vector<std::pair<int, int>> obstacles = {{2, 2}};
    Game game(4, 4, obstacles);

    // Print the initial grid
    game.printGrid();

    // Move the player (robot) and check the game state
    game.movePlayer(1, 0); // Move right
    game.printGrid();
    game.displayState();

    game.movePlayer(1, 0); // Move right
    game.printGrid();
    game.displayState();

    game.movePlayer(0, 1); // Move down
    game.printGrid();
    game.displayState();

    game.movePlayer(1, 1); // Move diagonally to goal
    game.printGrid();
    if (game.displayState()) {
        std::cout << "Game over.\n";
    }

    return 0;
}