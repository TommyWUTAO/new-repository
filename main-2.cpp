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

   

 

    return 0;
}