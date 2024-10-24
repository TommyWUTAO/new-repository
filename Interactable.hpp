#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

#include <utility>
#include "Robot.hpp"
#include "GridItem.hpp" 

// Define the enumeration for InteractableType
enum InteractableType { GOAL, OBSTACLE };

class Interactable : public GridItem {
private:
    static int activeInteractableCount; // Static count of active Interactable objects

public:
    // Constructor with parameters
    Interactable(int x, int y, int width, int height) 
        : GridItem(x, y, width, height) {
        activeInteractableCount++; // Increment the count when a new object is created
    }

    // Default constructor
    Interactable() : GridItem(0, 0, 0, 0) {
        activeInteractableCount++; // Increment the count for the default constructor
    }

    // Destructor
    virtual ~Interactable() {
        activeInteractableCount--; // Decrement the count when an object is destroyed
    }

    // Pure virtual function for interaction
    virtual bool interact(Robot* player) = 0;

    // Pure virtual function to get the type of the interactable
    virtual InteractableType getType() const = 0;

    // Function to get the count of active interactable objects
    static int getActiveInteractableCount() {
        return activeInteractableCount; // Return the current count
    }
};

// Initialize the static member variable
int Interactable::activeInteractableCount = 0;

#endif // INTERACTABLE_HPP