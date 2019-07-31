/***********************************************************
Name: Jovanni ELias
Assignment: coding 07
Purpose: 
Notes: 
***********************************************************/

#include "person.h"

Person::Person(string n,int num, int a, string ff){
   
    setName(n);
    setAge(a);
    setFavoriteFood(ff);
    setid(num);
}

Person::~Person(){
}

/*****getters*******/
int Person::getAge(){
    return age;
}

string Person::getName(){
    string fname,lname;
    int firstSpace = name.find_first_of(" ");
    fname = name.substr(0,firstSpace);
    lname = name.substr(firstSpace);
    
    return lname + ", " + fname;
}

string Person::getFavoriteFood(){
    return favoriteFood;
}
/*****setters*******/

void Person::setAge(int a){
    if (a < 0 || a > 100){
        age = 0;
    } else {
        age = a;
    }
}

void Person:: setName(string n){
    name = n;
}

void Person:: setFavoriteFood(string ff){
    if (ff == ""){
        favoriteFood = "Texas BBQ";
    } else {
        favoriteFood = ff;
    }
}

int Person::getid(){
    return id;
}

void Person::setid(int num){
    id = num;
}



