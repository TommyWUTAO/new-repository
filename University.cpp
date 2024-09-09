#include"University.h"
University::University():name(" "),location(" "){}
University::University(std::string name,std::string location):name(name),location(location){}
void University::addCourse(int id, std::string name)
{
    Course newcourse(name, id);
    newCourse.push_back(newcourse);
}