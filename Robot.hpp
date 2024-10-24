class Robot : public GridItem {
private:
    int health;

public:
    Robot(int gridWidth, int gridHeight) : GridItem(0, 0, gridWidth, gridHeight), health(3) {}

    int getHealth() const {
        return health;
    }

    void takeHit() {
        if (health > 0) health--;
    }

    bool move(int xOffset, int yOffset) {
        int newX = x + xOffset;
        int newY = y + yOffset;

        if (newX >= 0 && newX < width && newY >= 0 && newY < height) {
            setCoordinates(newX, newY);
            return true;
        }
        return false;
    }
};