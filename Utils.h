#ifndef UTILS_H
#define UTILS_H

#include <tuple>
#include <cmath>
#include <random>

class Utils {
public:
    // Generate a random position within the given grid width and height
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight);

    // Calculate Euclidean distance between two positions
    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2);
};

#endif // UTILS_H