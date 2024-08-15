#include<iostream>
#include"Perhon.h" 
PersonList shallowCopyPersonList(PersonList pl)
{
     PersonList new1 ;
     new1.people = pl.people;
     new1.numPeople = pl.numPeople;
     return new1;
}
