#ifndef GRADE_H
#define GRADE_H
#include<string>
#include"Student.h"
class Grade
{
    protected:
    std::string assignment;
    int value;
    public:
    Grade(std::string assignment,int value);
};

#endif
