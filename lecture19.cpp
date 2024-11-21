#include <iostream>
using namespace std;

class Data
{
protected:
    float value = 0.25;
public:
    Data() : value(1.3){};
    void setValue(float value)
    {
        this->value =value;
    };
    float getValue()
    {
        return value;
    };
};
class SecureData : public Data
{
public:
    SecureData() {};
    int getValue()
    {
         
    };
};

int main()
{
    SecureData d;
    cout<<d.getValue()<<endl;
    return 0 ;
}