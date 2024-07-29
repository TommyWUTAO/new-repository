#include <iostream>
#include <string>

using namespace std;

string ConvertToBinary(int number) {
    if (number == 0) return "0";

    string binaryString = "";
    while (number > 0) {
        int remainder = number % 2;
        binaryString = char(remainder + '0') + binaryString;
        number = number / 2;
    }
    return binaryString;
}

int main() {
    int number;
    cout << "Enter a number: "; 
    cin >> number; 

    if (number < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    string binary = ConvertToBinary(number);
    cout << "Binary representation: " << binary << endl;

    return 0;
}