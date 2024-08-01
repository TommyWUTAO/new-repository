#include<iostream>
using namespace std;
int binary_to_int(int binary_digits[], int number_of_digits);
int main() {
    int binary_digits[] = {1, 0, 1, 1}; 
    int number_of_digits = sizeof(binary_digits) / sizeof(binary_digits[0]);
    
    int result = binary_to_int(binary_digits, number_of_digits);
    if (result != -1) {
        cout << "The integer value is: " << result << endl; 
    } else {
        cout << "Invalid input." << endl; 
    }
    
    return 0;
}
