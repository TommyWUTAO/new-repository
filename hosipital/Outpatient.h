#ifndef OUTPATIENT_H
#define OUTPATIENT_H
#include"Patient.h"
class Outpatient:public Patient
{
    private:
    double consultationFee;
    public:
    Outpatient();
    Outpatient(std::string name, int patientID,int consultationFee);
    double calculateBill();
};
#endif