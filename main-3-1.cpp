#include <iostream>

#include "Car.h"
#include "Fleet.h"
#include "Tesla.h"
using namespace std;

int main() {
 
  Fleet fleet;

  // Print the cars in the fleet
  // Print the cars in the fleet
  Car** cars = fleet.get_fleet();  // Retrieve the array of cars
  for (int i = 0; i < 5; i++) {
    cars[i]->drive(100); 
    cout << "Car " << i + 1 << " price: $" << cars[i]->get_price() << endl;
    cout << "Car " << i + 1
         << " emissions after driving 100 km: " << cars[i]->get_emissions()
         << " grams" << endl;
  }

  // Clean up dynamically allocated memory in Fleet class (if needed)
  for (int i = 0; i < 5; i++) {
    delete cars[i];  // Delete each car object
  }
  delete[] cars;  //

  return 0;
}