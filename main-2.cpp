#include <iostream>
#include "Robot.hpp"
#include "Goal.hpp"
#include "Obstacle.hpp"

int main() {
    Robot robot(5, 5);
    Goal goal(5, 5);
    Obstacle obstacle(2, 2);

    std::cout << "Initial Robot Health: " << robot.getHealth() << std::endl;

    // Move the robot
    robot.move(1, 0); // Move right
    std::cout << "Robot moved to: " << robot.getCoordinates().first << ", " << robot.getCoordinates().second << std::endl;

    // Check interaction with goal
    if (goal.interact(&robot)) {
        std::cout << "Robot reached the goal!" << std::endl;
    } else {
        std::cout << "Robot has not reached the goal." << std::endl;
    }

    // Place obstacle and check interaction
    obstacle.interact(&robot);
    std::cout << "Robot Health after hitting obstacle: " << robot.getHealth() << std::endl;

    return 0;
}