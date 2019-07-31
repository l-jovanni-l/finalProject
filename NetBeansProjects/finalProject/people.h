/***********************************************************
Name: Jovanni ELias
Assignment: coding 07
Purpose: 
Notes: 
***********************************************************/

#ifndef PEOPLE_H
#define PEOPLE_H
#include <string>
#include <iostream>
#include <fstream>
#include "person.h"
using namespace std;

enum sortType {NONE, ID, AGE};

class People {
    
public: 
    
    People(string);
    ~People();
    
    void displayPeople(sortType = NONE);
    
    void clear();
    
    
private: 
    int numPeople;
    
    Person **person;
    void bubbleSort(Person**, sortType);
    void swap(Person**, Person**);
    
};
    



#endif /* PEOPLE_H */

