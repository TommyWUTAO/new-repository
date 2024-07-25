#include <iostream>
int count_evens(int number);

int main() {
    int number = 10;

    int result = count_evens(number);
    std::cout << "Count of even numbers between 1 and " << number << ": " << result << std::endl;

    return 0;
}