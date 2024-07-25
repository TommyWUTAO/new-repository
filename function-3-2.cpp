#include <algorithm>
int median_array(int array[], int n) {
    if (n < 1 || n % 2 == 0) {
        return 0;
    }
    int mid = n / 2;
    std::nth_element(array, array + mid, array + n);

    return array[mid];
}