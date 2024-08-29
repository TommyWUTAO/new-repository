#include <iostream>
#include <string>
using namespace std;
class Sonic
{
public:
     void SummonTails() { cout << "cannot" << endl; }
};

class SonicTwo : public Sonic
{
public:
    virtual void SummonTails() { cout << "carry me pls" << endl; }
};

int main()
{
    Sonic* sonic = new SonicTwo;
    sonic->SummonTails();
}