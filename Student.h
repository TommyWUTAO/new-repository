#ifndef STUDENT_H
#define STUDENT_H
#include"Person.h"
class student:public Person
{
    protected:
    int name;
    public:
    student(std::string name);
};
#endif