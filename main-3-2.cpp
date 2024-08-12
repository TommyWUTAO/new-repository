#include <iostream>
using namespace std;
int* readNumbers();
int *reverseArray(int *numbers1,int length) ;
bool equalsArray(int* numbers1, int* numbers2, int length);
int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    int* reversed = reverseArray(numbers, length);


    delete[] reversed; 

    return 0;
}