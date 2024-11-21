#include <iostream>
using namespace std;
#include <string>

int main(){
    char name[] = {'m','i','k','e'};
    char* nameCopy = name;
    nameCopy[3] = 'y';
    cout<<string(nameCopy)<<endl;
    return 0;
}