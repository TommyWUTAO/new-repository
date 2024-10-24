#include "Game.hpp"

int main() {
    // Define obstacle coordinates
    std::vector<std::pair<int, int>> obstacleCoordinates = { {2, 2}, {1, 1} };

    // Create a new game
    Game game(4, 6, obstacleCoordinates);

    // Print the initial grid
    game.printGrid();

    // Display the initial state
    game.displayState();

    // Simulate some moves
    game.movePlayer(1, 0); // Move right
    game.printGrid();
    game.displayState();

    game.movePlayer(1, 0); // Move right
    game.printGrid();
    game.displayState();

    game.movePlayer(1, 0); // Move right
    game.printGrid();
    game.displayState();

    game.movePlayer(0, 1); // Move down
    game.printGrid();
    game.displayState();

    game.movePlayer(1, 1); // Move down and right into an obstacle
    game.printGrid();
    game.displayState();

    return 0;
}