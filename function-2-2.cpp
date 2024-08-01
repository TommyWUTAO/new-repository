#include <iostream>
int binary_to_int(int binary_digits[], int number_of_digits) {
    int result = 0;
    if(number_of_digits<30&&number_of_digits>1){
    for (int i = 0; i < number_of_digits; ++i) {
        result = result * 2 + binary_digits[i];
    }
    }

    return result;
}