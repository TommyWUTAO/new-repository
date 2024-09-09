#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include<string>
#include"Course.h"
#include"Gradebook.h"
#include<vector>
class University {

      private: 
         std::string name;
         std::string location;
         std::vector<Course> newCourse;
      public:
        University();
        University(std::string name,std::string location);
        void addCourse(int id, std::string name);
};
#endif