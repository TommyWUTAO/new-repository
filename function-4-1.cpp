#include <iostream>
#include <vector>


int* readNumbers() {
    int* numbers = new int[10];
    for (int i = 0; i < 10; ++i) {
        std::cin >> numbers[i];
    }
    return numbers;
}
int secondSmallestSum(int* numbers, int length) {
    int sum=0;
    std::vector<int> numsum;
    for(int i=0;i<length;i++)
    {
        
        sum=0;
        for(int j=i;j<length;j++)
        {
            sum+=numbers[j];
            numsum.push_back(sum);
        }
        
    }
    std::cout << "All subarray sums: ";
for (int i = 0; i < numsum.size(); ++i) {
    std::cout << numsum[i] << " ";
}
std::cout << std::endl;
 return numsum[1];
}