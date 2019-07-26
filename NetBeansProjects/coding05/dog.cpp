/***********************************************************
Name: Jovanni ELias
Assignment: coding 05
Purpose: 
Notes: 
***********************************************************/

#include "dog.h"

Dog::Dog(string name, int age, bool akc): Pet(name, age) {
    setAkc(akc);
}    

Dog::~Dog(){
}

bool Dog::getAkc(){
    return akc;
}

void Dog::setAkc(bool a){
    akc = a;
}







