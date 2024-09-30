#ifndef INVOICE_H
#define INVOICE_H

#include <string>

class Invoice {
private:
    std::string invoiceId;
    double dollarsOwed;

public:
    // Constructor
    Invoice(const std::string &id);

    // Adds service cost to the invoice
    void addServiceCost(double costDollars);

    // Returns the total amount owed
    double getDollarsOwed() const;

    // Returns the invoice ID
    std::string getInvoiceId() const;
};

#endif