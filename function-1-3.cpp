#include<iostream>
#include"Perhon.h" 
PersonList deepCopyPersonList(PersonList pl)
{
    PersonList new1;
    new1.numPeople = pl.numPeople;
    new1.people = new Person[new1.numPeople];
    for(int i=0;i<new1.numPeople;i++)
    {
        new1.people[i].name=pl.people[i].name;
        new1.people[i].age=pl.people[i].age;
    }
    return new1;
}