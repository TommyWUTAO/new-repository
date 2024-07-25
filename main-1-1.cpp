#include<iostream>
// the keyword extern means the function hello is defined in another file.
// in our case, it is defined in the file function-1-1.cpp
extern void hello();
int main()
{
    hello();

    return 0;
    // in linux, you can compile this program using g++
    // g++ -Wall main-1-1.cpp function-1-1.cpp -0 main.out
    // -Wall means show all Warnings
    // -o means you want the output to be named main.out
}
