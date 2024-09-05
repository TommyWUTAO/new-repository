#include <iostream>
#include "Car.h"  
using namespace std;

int main() {
    
    Car car1;
    car1.set_price(15000);  
    car1.drive(100);        
    cout << "Car 1 price: $" << car1.get_price() << endl;
    cout << "Car 1 emissions after driving 100 km: " << car1.get_emissions() << " grams" << endl;
    Car car2(25000);
    car2.drive(200);  
    cout << "Car 2 price: $" << car2.get_price() << endl;
    cout << "Car 2 emissions after driving 200 km: " << car2.get_emissions() << " grams" << endl;

    return 0;
}