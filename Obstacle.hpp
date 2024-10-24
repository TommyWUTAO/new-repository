#include<utility>
#include"Interactable.hpp"

class Obstacle : public Interactable {
public:
    Obstacle(int x, int y, int width, int height) : Interactable(x, y, width, height) {}

    bool interact(Robot* player)  {
        // Check if the player is at the obstacle
        if (Helper::euclideanDistance(getCoordinates(), player->getCoordinates()) == 0) {
            player->takeHit(); // Robot takes damage
            return player->getHealth() > 0;
        }
        return false;
    }

    InteractableType getType() const  {
        return OBSTACLE;
    }
};