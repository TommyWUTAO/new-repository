#include "AirCraft.h"

class AirFleet {
private:
    AirCraft** fleet; // Array of pointers to 5 AirCraft objects

public:
    AirFleet(); // Constructor
    AirCraft** get_fleet(); // Returns the fleet
};