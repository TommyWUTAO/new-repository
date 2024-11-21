#include <iostream>
using namespace std;

int modify(double& number)
{
    return number+1.0;
};

int main(){
    double x =5.25;
    int y = modify(x);
    cout<<x<<endl;
    return 0;
};