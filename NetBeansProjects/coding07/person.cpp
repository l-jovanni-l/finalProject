/***********************************************************
Name: Jovanni ELias
Assignment: coding 07
Purpose: 
Notes: 
***********************************************************/

#include "person.h"

Person::Person(string n, int a, string ff){
   
    setName(n);
    setAge(a);
    setFavoriteFood(ff);
}

Person::~Person(){
}

/*****getters*******/
int Person::getAge(){
    return age;
}

string Person::getName(){
    return name;
}

string Person::getFavoriteFood(){
    return favoriteFood;
}
/*****setters*******/

void Person:: setAge(int a){
    if (a > 100 || a < 0){
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

int makeid(string name){
    int id;
    int size = name.length();
    for (int i=0;i<size;i++){
        if (islower(name[i])){
            id+=name[i];
        }
        
    }cout << id << endl;
    return id;
}



