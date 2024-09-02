#include <iostream>
using namespace std;

class Wizard
{
public:
    Wizard() {}
    void printPower() { cout << power; }
protected:
    int power = 5;
};

class DarkWizard : public Wizard
{
public:
    DarkWizard() { multiplier = 3; }
    void printPower() { cout << power * multiplier; }
protected:
    double multiplier = 2;
};

int main()
{
    Wizard* wizards = new Wizard[2]{Wizard(), DarkWizard()};
    wizards[0].printPower();
    cout << " ";
    wizards[1].printPower();
    cout << endl;
}