#include <iostream>
using namespace std;
int* readNumbers();
int *reverseArray(int *numbers1,int length) ;
bool equalsArray(int* numbers1, int* numbers2, int length);
int main() {
    int numbers1[]={1,2,3,4,5};
    int numbers2[]={1,2,3,4,5};
    cout<<equalsArray(numbers1,numbers2,5);
    int numbers3[]={4,5};
    int numbers4[]={1,2};
    cout<<equalsArray(numbers3,numbers4,2);

    int numbers[] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    int* reversed = reverseArray(numbers, length);


    delete[] reversed; 

    return 0;
}