#ifndef SEAT_H
#define SEAT_H

#include <iostream>
#include <string>
#include<vector>

class Seat
{
    private:
    int row;
    int seat;
    bool isavailable;
    std::vector<std::string> name;
    std::string reservedBy;
    public:
    // Constructors
    Seat();
    Seat(int row, int seat);

    // Member functions
    bool checkAvailability();
    void reserveSeat(const std::string& customerName);
    void cancelReservation();
    void displaySeatInfo() const;
};


#endif