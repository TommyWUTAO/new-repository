#include <iostream>
#include <string>
using namespace std;
char* getArray()
{
    char newArray[4];
    newArray[0] = 'b';
    newArray[1] = 'e';
    newArray[2] = 'n';
    newArray[3] = 'y';
    return newArray;
}

int main()
{
    char* newArray = getArray();
    newArray[3] = 'y';
    cout<<string(newArray)<<endl;
    return 0;
}