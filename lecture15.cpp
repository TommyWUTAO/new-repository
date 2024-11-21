#include <iostream>
using namespace std;

class Data
{
protected:
public:
    float value = 0.25;
    float setValue(float value)
    {
        float temp = this->value;
        this->value = value ;
        return temp;
    };
};

int main()
{
    Data d;
    float value = d.setValue(5.3);
    cout<<d.value<<endl;
    return 0 ;
}