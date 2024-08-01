#include <cmath>
int sum_if_palindrome (int integers[], int length)
{
    int integer_value = 0;
    for (int i = 0; i < length; ++i) {
        if (integers[i] == 1) {
            integer_value += pow(2, length - 1 - i);
        }
    }
    return integer_value;
}