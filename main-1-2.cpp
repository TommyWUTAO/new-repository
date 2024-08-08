#include <iostream>
void modifyArray(double* array, int size, double value);
int main() {
    
    double myArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    
    double valueToAdd = 2.5;

    
    modifyArray(myArray, size, valueToAdd);

    
    std::cout << "Modified array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
