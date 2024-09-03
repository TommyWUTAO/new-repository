#include"Inpatient.h"
Inpatient::Inpatient():daysAdmitted(0),dailyRate(0){}
Inpatient::Inpatient(std::string name, int patientID,int days, double rate):Patient(),daysAdmitted(days),dailyRate(rate){}
double Inpatient::calculateBill()
{
    return daysAdmitted * dailyRate;
}
