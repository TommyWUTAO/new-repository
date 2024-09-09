#include "Course.h"
#include <iostream>


Course::Course(std::string name, int id) : name(name), id(id) {}

void Course::addPerson(Person* person) {
    persons.push_back(person);
}
void Course::showPersons()  {
    std::cout << "Persons in course " << name << ":\n";
    for (const auto& person : persons) {
        std::cout << "- " << person->getName() << std::endl;
    }
}
void Course::set_name(std::string name) {
    this->name = name;
}
int Course::getID() {
    return id;
}