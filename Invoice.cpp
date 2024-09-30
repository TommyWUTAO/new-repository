// Invoice.cpp
#include "Invoice.h"

// Constructor
Invoice::Invoice(const std::string &id) : invoiceId(id), dollarsOwed(0.0) {}

// Adds service cost
void Invoice::addServiceCost(double costDollars) {
    if (costDollars > 0) {
        dollarsOwed += costDollars;
    }
}

// Returns the total amount owed
double Invoice::getDollarsOwed() const {
    return dollarsOwed;
}

// Returns the invoice ID
std::string Invoice::getInvoiceId() const {
    return invoiceId;
}