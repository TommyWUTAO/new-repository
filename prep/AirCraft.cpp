#include "AirCraft.h"

AirCraft::AirCraft() : weight(0), fuel(100.0), numberOfFlights(0) {}

AirCraft::AirCraft(int w) : weight(w), fuel(100.0), numberOfFlights(0) {}

int AirCraft::get_weight() const { return weight; }
void AirCraft::set_weight(int w) { weight = w; }

float AirCraft::get_fuel() const { return fuel; }
void AirCraft::set_fuel(float f) { fuel = f; }

int AirCraft::get_numberOfFlights() const { return numberOfFlights; }
void AirCraft::set_numberOfFlights(int n) { numberOfFlights = n; }

void AirCraft::refuel() { fuel = 100.0; }

void AirCraft::fly(int headwind, int minutes) {
    numberOfFlights++;
    // Logic for fuel reduction based on headwind and minutes can be implemented later
}