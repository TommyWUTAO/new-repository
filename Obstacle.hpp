#ifndef OBSTACLE_HPP
#define OBSTACLE_HPP

#include "Interactable.hpp"
#include "Helper.hpp" // Include Helper to avoid 'not declared' errors

class Obstacle : public Interactable {
public:
    // Constructor that takes x, y, width, height
    Obstacle(int x, int y, int width, int height) : Interactable(x, y, width, height) {}

    // Implement interact function
    bool interact(Robot* player) override {
        if (Helper::euclideanDistance(getCoordinates(), player->getCoordinates()) == 0) {
            player->takeHit();
            return player->getHealth() == 0; // Return true if health is zero
        }
        return false;
    }

    // Implement getType function
    InteractableType getType() const override {
        return OBSTACLE;
    }
};

#endif // OBSTACLE_HPP