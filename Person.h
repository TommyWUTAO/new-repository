#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
private:
    std::string name;

public:
    Person(std::string personName) ;

    std::string getName();
};

#endif 