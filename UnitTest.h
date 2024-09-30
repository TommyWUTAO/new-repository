// UnitTest.h

#include <iostream>
#include "Addition.h"

class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    void testAddition() {
        Addition addition;

        if (addition.add(1, 2) == 3) {
            std::cout << "Test 1 correct!" << std::endl;
        }
         if (addition.add(1, 2) != 3) {
            std::cout << "Test 1 failed!" << std::endl;
        }
        // Add more tests here
    }
};