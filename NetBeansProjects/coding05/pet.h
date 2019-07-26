/***********************************************************
Name: Jovanni ELias
Assignment: coding 05
Purpose: 
Notes: 
 ***********************************************************/
#include <string>
using namespace std;
#ifndef PET_H
#define PET_H

class Pet {

public:
    
//    Constructor tells what it needs for it to be an object
    Pet();
    Pet(string, int); //needs a name and an age
    
//    Destructor
    ~Pet();
    
//    Get the values
    string getName();
    int getAge();
    
//    Set the values
    void setName(string);
    void setAge(int);
    

protected:
//    Private variables that define a pet
    string name;
    int age;


};


#endif /* PET_H */

