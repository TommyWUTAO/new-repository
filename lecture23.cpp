#include <iostream>
using namespace std;

class Data
{
protected:
    float value = 0.25;
public:
    Data()
    {
        value = 0.3;
    };
    virtual float getValue()
    {
        return value;
    };
};

class SecureData : public Data
{
public:
    SecureData()
    {
        value = 0.5;
    };
};

class FixedData : public SecureData
{
public:
    FixedData(){};
    float getValue()
    {
        return value+1;
    };
};

int main()
{
    Data* d = new FixedData();
    cout<<d->getValue()<<endl;
    delete d;
    return 0;
}