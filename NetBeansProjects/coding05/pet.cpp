/***********************************************************
Name: Jovanni ELias
Assignment: coding 05
Purpose: 
Notes: 
***********************************************************/
#include "pet.h"

Pet::Pet(){
    setName("");
    setAge(0);
}

Pet::Pet(string n, int a){
    setName(n);
    setAge(a);
}

Pet::~Pet(){
}

string Pet::getName(){
    return name;
}

int Pet::getAge(){
    return age;
}

void Pet::setName(string n){
    if (n == ""){
        throw "name cannot be empty";
    }else {
        name = n;
    }
}

void Pet:: setAge(int a){
    if (a < 1){
        throw "age cannot be less than 1";
    } else{
        age = a;
    }
}
