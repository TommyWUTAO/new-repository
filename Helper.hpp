#ifndef HELPER_HPP
#define HELPER_HPP

#include <cmath>
#include <utility>

class Helper {
public:
    // Function to calculate the Euclidean distance between two coordinates
    static double euclideanDistance(std::pair<int, int> item1, std::pair<int, int> item2) {
        return std::sqrt(std::pow(item1.first - item2.first, 2) + std::pow(item1.second - item2.second, 2));
    }
};

#endif // HELPER_HPP