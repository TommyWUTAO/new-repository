#include <iostream>
#include <vector>

void count_digits(int array[4][4]) {
    
    std::vector<int> counts(10, 0);

    
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            int value = array[i][j];
            if (value >= 0 && value <= 9) {
                counts[value]++;
            }
        }
    }

    
    for (int i = 0; i < 10; ++i) {
        std::cout << i << ":" << counts[i] << ";";
    }
    std::cout << std::endl;
}
