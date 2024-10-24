#include <iostream>
#include "Robot.hpp"
#include "Goal.hpp"
#include "Obstacle.hpp"
#include "Helper.hpp"

int main() {
    // Create a 4x4 grid with a Robot, a Goal, and an Obstacle
    Robot robot(4, 4);
    Goal goal(4, 4); // Goal at (3,3) in a 4x4 grid
    Obstacle obstacle(2, 2, 4, 4); // Obstacle at (2,2)

   

    // Move the Robot
    robot.move(1, 1); // Move to (1,1)
    std::cout << "Robot moved to: (" << robot.getCoordinates().first << ", "
              << robot.getCoordinates().second << ")\n";

    // Check interaction with the Obstacle
    if (obstacle.interact(&robot)) {
        std::cout << "Robot hit the obstacle and took damage. Health: " << robot.getHealth() << "\n";
    }

    // Move Robot to the Goal and check if the game is won
    robot.move(2, 2); // Move to (3,3)
    if (goal.interact(&robot)) {
        std::cout << "Robot reached the goal!\n";
    }

    return 0;
}