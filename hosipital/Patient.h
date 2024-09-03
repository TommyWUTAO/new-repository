#ifndef PATIENT_H
#define PATIENT_H
#include<iostream>
class Patient
{
    private:
    std::string name;
	int patientID;
    public:
    Patient();
    Patient(std::string name,int ID);
    virtual double calculateBill() = 0;
};
#endif