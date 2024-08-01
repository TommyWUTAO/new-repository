#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number) {
    int number = std::stoi(decimal_number);
    if (number == 0) {
        std::cout << "0\n";
        return;
    }
    
    std::string binarystring = "";
    while (number > 0) {
        int remainder = number % 2;
        binarystring = char(remainder + '0') + binarystring;
        number = number / 2;
    }
    
    std::cout << binarystring << "\n";
}
