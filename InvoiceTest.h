// InvoiceTest.h
#ifndef INVOICE_TEST_H
#define INVOICE_TEST_H

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testConstructor();
        testAddServiceCost();
        testGetDollarsOwed();
        testGetInvoiceId();
    }

private:
    void testConstructor() {
        Invoice invoice("12345");
        if (invoice.getInvoiceId() != "12345" || invoice.getDollarsOwed() != 0) {
            std::cout << "Constructor test failed!" << std::endl;
        }
    }

    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("XYZ");
            invoice.addServiceCost(-5); // Negative value, should be ignored
            if (invoice.getDollarsOwed() != 0) {
                std::cout << "Test 3 failed!" << std::endl;
            }
        }
    }

    void testGetDollarsOwed() {
        Invoice invoice("XYZ");
        invoice.addServiceCost(25);
        invoice.addServiceCost(15);
        if (invoice.getDollarsOwed() != 40) {
            std::cout << "getDollarsOwed test failed!" << std::endl;
        }
    }

    void testGetInvoiceId() {
        Invoice invoice("XYZ123");
        if (invoice.getInvoiceId() != "XYZ123") {
            std::cout << "getInvoiceId test failed!" << std::endl;
        }
    }
};

#endif