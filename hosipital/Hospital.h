#ifndef HOSIPITAL_H
#define HOSIPITAL_H
#include"Patient.h"
#include"Outpatient.h"
#include"Inpatient.h"
#include<vector>
class Hospital
{
    private:
    std::vector<Patient*> patients;
    public:
    Hospital();
    void addPatient(Patient* patient);
    double calculateTotalRevenue();
};
#endif
