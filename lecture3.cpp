#include<iostream>
#include<string>
using namespace std;

int main(){
    char name[] = {'m','i','k','e'};
    char* nameCopy;
    nameCopy = name[0];
    nameCopy[3] = 'y';
    for (int i = 0; i < 4; i++)
    {
        cout<<nameCopy[i];
    }
    cout<<endl;
    
}