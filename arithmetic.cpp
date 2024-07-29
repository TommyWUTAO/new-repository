#include <iostream>
#include <string>

using namespace std;


int binaryToDecimal(const string& binary) {
    return stoi(binary, nullptr, 2);
}

// Function to convert decimal to binary string
string decimalToBinary(int decimal) {
    string binary;
    while (decimal > 0) {
        binary = char((decimal % 2) + '0') + binary;
        decimal /= 2;
    }
    return binary.empty() ? "0" : binary; // Return "0" if the result is empty
}

// Function to add two binary numbers
string addBinary(const string& bin1, const string& bin2) {
    int decimal1 = binaryToDecimal(bin1);
    int decimal2 = binaryToDecimal(bin2);
    int sum = decimal1 + decimal2;
    return decimalToBinary(sum);
}

// Function to subtract two binary numbers
string subtractBinary(const string& bin1, const string& bin2) {
    int decimal1 = binaryToDecimal(bin1);
    int decimal2 = binaryToDecimal(bin2);
    int diff = decimal1 - decimal2;
    return decimalToBinary(diff);
}

// Function to shift binary number left
string shiftLeft(const string& binary) {
    int decimal = binaryToDecimal(binary);
    decimal <<= 1; // Shift left by 1
    return decimalToBinary(decimal);
}

// Function to shift binary number right
string shiftRight(const string& binary) {
    int decimal = binaryToDecimal(binary);
    decimal >>= 1; // Shift right by 1
    return decimalToBinary(decimal);
}

int main() {
    string binary1 = "111011101011";
    string binary2 = "1000"; // Example for addition and subtraction

    cout << "Addition of binary numbers:" << endl;
    cout << "Result: " << addBinary(binary1, binary2) << endl;

    cout << "Subtraction of binary numbers:" << endl;
    cout << "Result: " << subtractBinary(binary1, binary2) << endl;

    cout << "Shift Left:" << endl;
    cout << "Result: " << shiftLeft(binary1) << endl;

    cout << "Shift Right:" << endl;
    cout << "Result: " << shiftRight(binary1) << endl;

    return 0;
}