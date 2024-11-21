#include <iostream>
using namespace std;

class Data
{
protected:
public:
    float value = 0.25;
    float setValue()
    {
    this -> value = value; 
    return value;
    };
};
int main()
{
    Data d;
    float result = d.setValue(5.3);
    cout<<result<<endl;
    return 0 ;
}