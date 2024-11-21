#include <iostream>
using namespace std;

void power(int*number)
{
    *number = (*number)*(*number);
};

int main()
{
    int x = 5;
    power(&x);
    cout<<x<<endl;
    return 0;
}