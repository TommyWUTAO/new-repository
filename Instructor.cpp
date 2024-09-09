#include"Instructor.h"
#include<string>
instructor::instructor(std::string name):Person(name){}
std::string instructor::get_teacher(std::string teacher)
{
    return teacher;
}