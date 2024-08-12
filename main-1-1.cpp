#include <iostream>
using namespace std;

int* readNumbers(); 
void printNumbers(int* numbers, int length); 

int main() {
    int* numbers = readNumbers(); 
    printNumbers(numbers, 10); 
    return 0;
}