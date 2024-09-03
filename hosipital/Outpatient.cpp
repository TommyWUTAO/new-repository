#include"Outpatient.h"
Outpatient::Outpatient():consultationFee(0){}
Outpatient::Outpatient(std::string name, int patientID,int consultationFee):Patient(),consultationFee(consultationFee){}
double Outpatient::calculateBill()
{
    return consultationFee;
}