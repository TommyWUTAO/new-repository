// main-1.cpp
#include <iostream>
#include "GameEntity.h"

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation

    auto pos1 = Utils::generateRandomPos(10, 10);
    auto pos2 = Utils::generateRandomPos(10, 10);
    
    double distance = Utils::calculateDistance(pos1, pos2);
    
    // Output the positions and distance
    std::cout << "Position 1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")\n";
    std::cout << "Position 2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")\n";
    std::cout << "Distance: " << distance << "\n";

    return 0;
}