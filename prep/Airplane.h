#include "AirCraft.h"

class Airplane : public AirCraft {
private:
    int numPassengers;

public:
    Airplane(); // Default constructor
    Airplane(int w, int p); // Constructor with weight and passengers

    // Getter and setter for numPassengers
    int get_numPassengers() const;
    void reducePassengers(int x);

    void fly(int headwind, int minutes) override; // Override fly method
};