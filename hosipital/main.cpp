#include"Hospital.h"
#include<vector>
#include<iostream>
using namespace std;
int main ()
{
    Patient* patient1 = new Inpatient("Tom" ,123,5,5.5);
    Patient* patient2 = new Outpatient("July", 456,50);
    Hospital myHospital;
    myHospital.addPatient(patient1);
    cout << "Total Revenue: $" << myHospital.calculateTotalRevenue() << endl;
    myHospital.addPatient(patient2);
    cout << "Total Revenue: $" << myHospital.calculateTotalRevenue() << endl;
}