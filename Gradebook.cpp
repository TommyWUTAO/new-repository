#include"Gradebook.h"
#include"Student.h"
void Gradebook::addGrade(int studet_id,int course_id,std::string assignment, int value)
{
    Grade newGrade(assignment, value);
    studentGrades.push_back(newGrade);
}