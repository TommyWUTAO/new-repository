#include "Person.h"
Person::Person(std::string personName) : name(personName) {}

std::string Person::getName() { return name; }