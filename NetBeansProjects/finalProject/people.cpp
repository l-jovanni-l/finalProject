/***********************************************************
Name: Jovanni ELias
Assignment: coding 07
Purpose: 
Notes: 
***********************************************************/

#include "people.h"

People::People(string fileName){
 
    ifstream inFile;
    string name, food;
    int id, age;
    int size=0;
    int i=0;
    inFile.open(fileName);
    
    /* If i can open the file */
    if(inFile)                  
    {
        while(getline(inFile, name))    //this gets the number of lines in the file passed. 
            size++;
        inFile.clear();
        inFile.seekg(0, ios::beg);      //goes back to the beginning of the file
        /* If the file is empty throw the error*/
        if(size == 0)
            throw "Error: bad file name or empty file.";
        
        /* Created an array of pointers to person objects inside the people object*/
        person = new Person*[size];
        
        /*This gets any data before each comma and saves it to it's name, id, age and food*/
        while(getline(inFile, name, ','))       
        {
            inFile >> id;
            /* I did .ignore() because so that it ignores the next char, in this case it ignores every comma */
            inFile.ignore();
            inFile >> age;
            inFile.ignore();
            getline(inFile, food);
            /* Check to see variables were stored correctly */
            //cout << id << ": " << name << " is " << age << " years old and likes " << food << "." << endl;

            
            person[i] = new Person(name,id, age, food);
            i++;
            
        }
        inFile.close();
        numPeople = size;
    }
    /* If the file cannot be opened*/
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
    Person ** temp;
    temp = new Person* [numPeople];
    for(int i=0;i<numPeople; i++)
    {
        temp[i] = person[i];
    }
    
    if(sort != NONE)
    {
        bubbleSort(temp, sort);
    }
    
    if (numPeople == 0){
        cout << "There are no people to display" << endl;
    } else {
        for (int i=0;i<numPeople;i++){
            cout << temp[i]->getid() << ": " << temp[i]->getName() << " is " << temp[i]->getAge() <<" years old and likes " << temp[i]->getFavoriteFood() << "."  << endl;
        }
    }
}

void People::bubbleSort(Person** arr, sortType sort)
{ 
    int i,j;
    for (i=0; i < numPeople-1; i++){
        for (j=0; j<numPeople - i - 1; j++){
            if (sort == ID){
                if (arr[j]->getid() > arr[j+1]->getid()){
                    swap(&arr[j], &arr[j+1]);
                }
            }
            else 
            {
                if (sort == AGE){
                    if (arr[j]->getAge() > arr[j+1]->getAge()){
                        swap(&arr[j], &arr[j+1]);
                    }
                }
            }
        }
    }
}

void People::swap(Person** a, Person** b)
{
    Person *temp = *b;
    *b = *a;
    *a = temp;
}