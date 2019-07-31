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
#include "person.h"
using namespace std;

class People {
    
public: 
    
    People(string*, int*, string*, const int);
    ~People();
    
    void displayPeople();
    
    void clear();
    
    
private: 
    int numPeople;
    
    Person **person;
    
};
    



#endif /* PEOPLE_H */

