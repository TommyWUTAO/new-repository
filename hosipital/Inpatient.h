#ifndef INPATIENT_H
#define INPATIENT_H
#include"Patient.h"
class Inpatient:public Patient
{
    private:
    int daysAdmitted;
	double dailyRate;
    public:
    Inpatient();
    Inpatient(std::string name, int patientID,int days, double rate);
    double calculateBill();
};
#endif