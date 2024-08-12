#include <iostream>
#include <vector>
#include <algorithm>

int* readNumbers() {
    int* numbers = new int[10];
    for (int i = 0; i < 10; ++i) {
        std::cin >> numbers[i];
    }
    return numbers;
}
int secondSmallestSum(int* numbers, int length) {
    std::vector<int> sums;
    for (int i = 0; i < length; ++i) {
        int current_sum = 0;
        for (int j = i; j < length; ++j) {
            current_sum += numbers[j];
            sums.push_back(current_sum);
        }
    }
    std::sort(sums.begin(), sums.end());
    return sums[1];
}