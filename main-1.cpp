#include <iostream>
#include "GridItem.hpp"
#include "Helper.hpp"

int main() {
    // Test GridItem
    GridItem item1(1, 2, 3, 4);
    std::cout << "GridItem Coordinates: " << item1.getCoordinates().first << ", " << item1.getCoordinates().second << std::endl;
    std::cout << "Active GridItem Count: " << GridItem::getActiveGridItemCount() << std::endl;

    // Test Helper
    std::pair<int, int> point1 = {0, 0};
    std::pair<int, int> point2 = {3, 4};
    std::cout << "Euclidean Distance: " << Helper::euclideanDistance(point1, point2) << std::endl;

    return 0;
}