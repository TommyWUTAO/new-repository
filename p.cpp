#include <iostream>
#include <string>

int binaryToDecimal(const std::string& binary) {

    return std::stoi(binary, nullptr, 2);

}
std::string decimalToBinary(int decimal){
    std::string binary;
    while(decimal > 0)
    {
        binary = char ((decimal % 2) + '0') + binary;
        decimal/=2;
    }
    return binary;
}
std::string addbinary(std::string arr1,std::string arr2)
{
   int decimal1=binaryToDecimal(arr1);
   int decimal2=binaryToDecimal(arr2);
   int sum = decimal1 + decimal2;
   return decimalToBinary(sum);


}

int main() {
    
    std::string binary = "10100"; 
    std::string binary2 = "10100";
    
    std::cout << "Decimal value: " << binaryToDecimal(binary) << std::endl;
    std::cout << "Decimal value: " << addbinary(binary,binary2) << std::endl;

    return 0;
}