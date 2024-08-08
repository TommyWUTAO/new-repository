#include <iostream>
#include <limits>  
double arrayMin(double* array, int size) {
   double min = array[0];
    for (int i = 0; i < size; ++i) {
    {
            if(array[i]<min)
            {
                min=array[i];
            }
    }
    }
    return min;
}

