#include<iostream>
#include"Perhon.h"  
PersonList createPersonList(int n);
int main(){
    int n = 5;
    PersonList list = createPersonList(n);
    for(int i=0;i<list.numPeople;i++){
        std::cout<<"name "<<list.people[i].name<<" age "<<list.people[i].age<<std::endl;
    }
    delete[] list.people;
}