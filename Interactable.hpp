#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

#include "GridItem.hpp"

// Forward declaration of Robot class
class Robot;

enum InteractableType { GOAL, OBSTACLE };

class Interactable : public GridItem {
private:
    static int activeInteractableCount;

public:
    // Default constructor
    Interactable() : GridItem(0, 0, 0, 0) {
        activeInteractableCount++;
    }

    // Parameterized constructor
    Interactable(int x, int y, int width, int height) : GridItem(x, y, width, height) {
        activeInteractableCount++;
    }

    // Destructor
    virtual ~Interactable() {
        activeInteractableCount--;
    }

    // Pure virtual functions
    virtual bool interact(Robot* player) = 0; // Now Robot is recognized
    virtual InteractableType getType() const = 0;

    // Get active Interactable count
    static int getActiveInteractableCount() {
        return activeInteractableCount;
    }
};

// Initialize static member
int Interactable::activeInteractableCount = 0;

#endif // INTERACTABLE_HPP