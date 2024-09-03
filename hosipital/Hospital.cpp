#include"Hospital.h"
Hospital::Hospital(){}
void Hospital::addPatient(Patient* patient)
{
    patients.push_back(patient);
}
double Hospital::calculateTotalRevenue()
{
    double totalRevenue = 0.0;
    for(size_t i = 0;i<patients.size();i++)
    {
        totalRevenue=patients[i]->calculateBill();
    }
    return totalRevenue;
}