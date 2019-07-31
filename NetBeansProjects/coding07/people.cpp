/***********************************************************
Name: Jovanni ELias
Assignment: coding 07
Purpose: 
Notes: 
***********************************************************/

#include "people.h"

People::People(string *nombre, int *edad, string *comida, const int size){
    numPeople = size;
    
    //dynamically allocating pointers to an array of name person
    person = new Person*[size]; //person is now a an array of pointers of size size.
    for (int i=0;i<size;i++){
    person[i] = new Person(nombre[i],edad[i], comida[i]);
    }    
}

People::~People(){
    clear();
    
}

void People::clear(){
    for (int i=0;i<numPeople;i++){
        delete person[i];
    }
    delete person;
    numPeople=0;
}

void People::displayPeople(){
    if (numPeople == 0){
        cout << "There are no people to display" << endl;
    } else {
    for (int i=0;i<numPeople;i++){
            cout << person[i]->getid() << ": " << person[i]->getName() << " is " << person[i]->getAge() <<" years old and likes " << person[i]->getFavoriteFood() << "."  << endl;
    }
        }
}

