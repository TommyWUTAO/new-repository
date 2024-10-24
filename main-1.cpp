#include <iostream>
#include "GridItem.hpp"
#include "Helper.hpp"

int main() {
    // Create some GridItem objects
    GridItem item1(0, 0, 4, 4); // Coordinates (0,0) in a 4x4 grid
    GridItem item2(3, 3, 4, 4); // Coordinates (3,3) in a 4x4 grid

    // Test the Helper class's Euclidean distance function
    std::pair<int, int> coords1 = item1.getCoordinates();
    std::pair<int, int> coords2 = item2.getCoordinates();

    std::cout << "Distance between item1 and item2: "
              << Helper::euclideanDistance(coords1, coords2) << std::endl;

    // Display the number of active GridItem objects
    std::cout << "Active GridItems: " << GridItem::getActiveGridItemCount() << std::endl;

    return 0;
}