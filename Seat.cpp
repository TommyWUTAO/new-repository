#include<iostream>
#include"Seat.h"
// Constructors
    Seat::Seat():row(0),seat(0),isavailable(true),reservedBy(""){}
    Seat::Seat(int row, int seat):row(row),seat(seat),isavailable(true),reservedBy(""){}

    // Member functions
    bool Seat::checkAvailability() {
    return isavailable;
}
    void Seat::reserveSeat(const std::string& customerName){
        if(isavailable)
        {
            isavailable=false;
            reservedBy = customerName;
            std::cout << "Seat reserved for " << customerName << std::endl;
        } else {
            std::cout << "Seat already reserved by " << reservedBy << std::endl;
        }
        
    }
    void Seat::cancelReservation()
    {
        if(!isavailable)
        {
            isavailable=true;
            reservedBy = "";
            std::cout <<"Cncle successful";
        }
    }
   