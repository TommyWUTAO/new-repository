#include "Airplane.h"

Airplane::Airplane() : AirCraft(), numPassengers(0) {}

Airplane::Airplane(int w, int p) : AirCraft(w), numPassengers(p) {}

int Airplane::get_numPassengers() const { return numPassengers; }

void Airplane::reducePassengers(int x) {
    numPassengers -= x;
    if (numPassengers < 0) numPassengers = 0;
}

void Airplane::fly(int headwind, int minutes) {
    float fuelUsage = 0.003 * minutes; // Default fuel usage (0.3% per minute)

    if (headwind >= 60) {
        fuelUsage = 0.005 * minutes; // 0.5% per minute for strong headwind
    }

    fuelUsage += 0.0001 * numPassengers * minutes; // Additional fuel usage for passengers

    if (get_fuel() - fuelUsage >= 20.0) {
        set_fuel(get_fuel() - fuelUsage);
        set_numberOfFlights(get_numberOfFlights() + 1);
    }
}
