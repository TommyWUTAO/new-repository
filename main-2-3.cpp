#include <iostream>
void two_five_nine(int array[], int n);

int main()
{
    int array[] = {2, 5, 9, 2, 5, 9, 2, 9, 9};
    int n = sizeof(array) / sizeof(array[0]);
    two_five_nine(array, n);
    return 0;
}