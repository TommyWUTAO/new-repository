#include<iostream>
#include"Perhon.h" 
PersonList deepCopyPersonList(PersonList pl);
int main()
{
    PersonList pl;
    pl.numPeople = 3;
    pl.people = new Person[pl.numPeople];

    pl.people[0].name = "Jone";
    pl.people[0].age = 10;
    pl.people[1].name = "Tom";
    pl.people[1].age = 20;
    pl.people[2].name = "Jim";
    pl.people[2].age = 30;
    PersonList new1 = deepCopyPersonList(pl);
    for(int i=0;i<pl.numPeople;i++)
    {
        std::cout<<"name "<<new1.people[i].name<<" age "<<new1.people[i].age<<std::endl;
    }
    delete[] new1.people ;
}