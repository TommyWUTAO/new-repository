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
        this->value = value;
    };
    float getValue()
    {
        return value;
    };
};
class SecureData:public Data
{
public:
    SecureData() {};
    int getValue()
    {
        return Data::getValue();
    };
};

int main()
{
    SecureData* d = new Data();
    cout <<d.getValue()<<endl;
    delete d ;
    return 0;
}