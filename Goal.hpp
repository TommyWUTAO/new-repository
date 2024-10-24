#ifndef GOAL_HPP
#define GOAL_HPP

#include "Interactable.hpp"

class Goal : public Interactable {
public:
    // Constructor
    Goal(int width, int height) : Interactable(width - 1, height - 1, 1, 1) {}

    // Implement interact function
    bool interact(Robot* player) override {
        return Helper::euclideanDistance(getCoordinates(), player->getCoordinates()) == 0;
    }

    // Implement getType function
    InteractableType getType() const override {
        return GOAL;
    }
};

#endif // GOAL_HPP