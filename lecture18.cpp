#include <iostream>
using namespace std;
class Data
{
protected:
    float value = 0.25;
public:
    Data():value(0.3){};
    void setValue(float value)
    {
        this->value = value;
    };
};

class SecureData : protected Data
{
public:
    SecureData() 
    {
        value = 0.2;
    };
    float getValue()
    {
        return value ;
    };
};

int main()
{
    SecureData* d ;
    cout << d->getValue() << endl;
    return 0 ;
};