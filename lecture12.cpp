#include <iostream>
using namespace std;
struct Encryption
{
    char character = 'a';
    float value = 0.25;
};

int main()
{
    Encryption* data1;
    Encryption data2;
    data2.character = 'b';
    data2.value = 0.5;
    cout<<data2.character<<','<<data1->value<<endl;
    return 0 ;
}

