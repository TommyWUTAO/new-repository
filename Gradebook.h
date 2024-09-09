#ifndef COURSE_H
#define COURSE_H
#include <vector>
#include <string> 
#include "Grade.h"
class Gradebook
{
    private:
    std::vector<Grade> studentGrades;
    public:
    void addGrade(int studet_id,int course_id,std::string assignment, int value);
};
#endif
