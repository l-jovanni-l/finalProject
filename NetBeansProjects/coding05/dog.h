/***********************************************************
Name: Jovanni ELias
Assignment: coding 05
Purpose: 
Notes: 
***********************************************************/
#include <string>
using namespace std;
#include "pet.h"
#ifndef DOG_H
#define DOG_H

class Dog : public Pet {
    public: 
        Dog(string, int, bool);
        ~Dog();
        
        
//  getter
    bool getAkc();
    
//  setter
    void setAkc(bool);
        
    
private: 
//    private variable that defines a dog from a pet
    bool akc;
        
        
};

#endif /* DOG_H */

