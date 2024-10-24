class Goal : public Interactable {
public:
    Goal(int width, int height) : Interactable(width-1, height-1, width, height) {}

    bool interact(Robot* player) override {
        // Check if the player reached the goal
        return Helper::euclideanDistance(getCoordinates(), player->getCoordinates()) == 0;
    }

    InteractableType getType() const override {
        return GOAL;
    }
};