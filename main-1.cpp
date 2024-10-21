#include <iostream>
#include "Utils.h"

int main() {
    auto pos1 = Utils::generateRandomPos(10, 10);
    auto pos2 = Utils::generateRandomPos(10, 10);

    std::cout << "Position 1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")" << std::endl;
    std::cout << "Position 2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")" << std::endl;

    double distance = Utils::calculateDistance(pos1, pos2);
    std::cout << "Distance between positions: " << distance << std::endl;

    return 0;
}