#include <iostream>
using namespace std;

class Data
{
protected:
    float value = 0.25;
public:
    Data()
    {
        value =0.3;
    };
    virtual float getValue()
    {
        return value;
    };
    ~Data()
    {
        cout<<value<<' ';
    };
};
class SecureData : public Data
{
public:
    SecureData()
    {
        value = 0.5;
    };
    ~SecureData()
    {
        cout<<'S'<<' ';
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
    ~FixedData()
    {
        cout<<1<<' ';
    };
};

int main()
{
    Data* d = new FixedData();
    delete d ;
    cout << endl;
    return 0 ;
}