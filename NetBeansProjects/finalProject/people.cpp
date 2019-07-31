/***********************************************************
Name: Jovanni ELias
Assignment: coding 07
Purpose: 
Notes: 
***********************************************************/

#include "people.h"

People::People(string fileName){
//    numPeople = size;
//    
//    //dynamically allocating pointers to an array of name person
//    person = new Person*[size]; //person is now a an array of pointers of size size.
//    for (int i=0;i<size;i++){
//    person[i] = new Person(nombre[i],edad[i], comida[i]);
//    }    
    ifstream inFile;
    string name, food;
    int id, age;
    int size=0;
    int i=0;
    inFile.open(fileName);
    
    if(inFile)
    {
        while(getline(inFile, name))
            size++;
        
        inFile.clear();
        inFile.seekg(0, ios::beg);
        if(size == 0)
            throw "Error: bad file name or empty file.";
        
        person = new Person*[size];
        
        while(getline(inFile, name, ','))
        {
            inFile >> id;
            inFile.ignore();
            inFile >> age;
            inFile.ignore();
            getline(inFile, food);
//            cout << "name: " << name << endl << "id: " << id << endl;
//            cout << "age: " << age << endl << "food: " << food << endl;
            person[i] = new Person(name,id, age, food);
            i++;
            
        }
        inFile.close();
    }
    else
    {
        throw "Error: bad file name or empty file.";
    }
    
    
    
    
}

People::~People(){
    clear();
    
}

void People::clear(){
    if (numPeople != 0){
        for (int i=0;i<numPeople;i++){
            delete person[i];
        }
        delete person;
        numPeople=0;
    }
}

void People::displayPeople(sortType sort){
    
    
    
    if (numPeople == 0){
        cout << "There are no people to display" << endl;
    } else {
    for (int i=0;i<numPeople;i++){
            cout << person[i]->getid() << ": " << person[i]->getName() << " is " << person[i]->getAge() <<" years old and likes " << person[i]->getFavoriteFood() << "."  << endl;
    }
        }
}

