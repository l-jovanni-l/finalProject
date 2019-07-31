/***********************************************************
Name: Jovanni ELias
Assignment: coding 07
Purpose: 
Notes: 
***********************************************************/

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


class Person {
    
public: 
    
//    constructors
    Person(string,int, int, string);    //age, name, favfood
    ~Person();
    
//    getters
    int getid();        //returns ID
    void setid(int);
    
    int getAge();       //returns variable age
    void setAge(int);   //sets age
    
    string getName();
    void setName(string);
    
    string getFavoriteFood();
    void setFavoriteFood(string);       //if food empty, food is "Texas BBQ"
    
private: 
    
    int id;    
    int age;
    string name;
    string favoriteFood;
    
    //int makeid(string);
    
    
};
#endif /* PERSON_H */

