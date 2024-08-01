#include <iostream>
#include <string>
using namespace std;
void print_binary_str(std::string decimal_number);
int main() {
    
    string decimal_number = "789";
    print_binary_str(decimal_number);

    decimal_number = "123456789";
    print_binary_str(decimal_number);

    decimal_number = "0";
    print_binary_str(decimal_number);

    return 0;
}