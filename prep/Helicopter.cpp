#include "Helicopter.h"

Helicopter::Helicopter() : AirCraft(), name("") {}

Helicopter::Helicopter(int w, std::string n) : AirCraft(w), name(n) {}

std::string Helicopter::get_name() const { return name; }
void Helicopter::set_name(std::string n) { name = n; }

void Helicopter::fly(int headwind, int minutes) {
    float fuelUsage = 0.002 * minutes; // Default fuel usage (0.2% per minute)

    if (headwind >= 40) {
        fuelUsage = 0.004 * minutes; // 0.4% per minute for strong headwind
    }

    if (get_weight() > 5670) {
        fuelUsage += 0.0001 * (get_weight() - 5670) * minutes; // Additional fuel usage for heavy weight
    }

    if (get_fuel() - fuelUsage >= 20.0) {
        set_fuel(get_fuel() - fuelUsage);
        set_numberOfFlights(get_numberOfFlights() + 1);
    }
}