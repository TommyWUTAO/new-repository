#include "AirCraft.h"
#include <string>

class Helicopter : public AirCraft {
private:
    std::string name;

public:
    Helicopter(); // Default constructor
    Helicopter(int w, std::string n); // Constructor with weight and name

    // Getter and setter for name
    std::string get_name() const;
    void set_name(std::string n);

    void fly(int headwind, int minutes) ; // Override fly method
};