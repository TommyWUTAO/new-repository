#include<iostream>
#include"Person.h"
Person* createPersonArray(int n);
int main()
{
    int n=5;
    Person* people = createPersonArray(n);
    for(int i=0;i<n;i++){
        std::cout<<"name: "<<people[i].name<<" age: "<<people[i].age<<std::endl;
    }
    delete[]people;
}