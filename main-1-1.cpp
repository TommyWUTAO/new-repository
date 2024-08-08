#include <iostream>

double arrayMin(double* array, int size);
int main() {
  
    double myArray[] = {3.5, 2.1, 4.7, 1.2, 5.8};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    
    double minValue = arrayMin(myArray, size);

    
    std::cout << "The minimum value in the array is: " << minValue << std::endl;

    return 0;
}
