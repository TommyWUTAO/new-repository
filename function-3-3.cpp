#include <unordered_map>

double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0;
    }

    
    std::unordered_map<int, int> freq;
    
   
    for (int i = 0; i < n; ++i) {
        ++freq[array[i]];
    }

    
    double total_weighted_sum = 0;
    
    for (std::unordered_map<int, int>::iterator it = freq.begin(); it != freq.end(); ++it) {
        int element = it->first;
        int frequency = it->second;
        total_weighted_sum += element * frequency;
    }


    return total_weighted_sum / n;
}