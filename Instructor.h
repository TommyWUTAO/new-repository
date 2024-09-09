#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include<string>
#include"Person.h"
class instructor:public Person
{
    private:
    std::string name;
    public:
    instructor(std::string name);
    std::string get_teacher(std::string teacher);
};
#endif