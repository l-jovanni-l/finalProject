
/***********************************************************
Name: Jovanni ELias
Assignment: coding 06
Purpose: to sort and search an array of pointers to structs
Notes: 
***********************************************************/


#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <regex>
#include "data.h"
#include <string>

#define MINID 10
#define MAXID 30
#define MAXSTRINGSIZE 12

using std::cout;
using std::endl;
using std::regex;
using std::cin;
using std::string;

//written for you
int random_range(int, int);
string random_string(const int);
void fillData(Data**, int);
void displayArray(Data**, const int);

//write these
void swap(Data**, Data**);
void bubbleSortArray(Data**, const int);
int binarySearchArray(Data**, const int, const int, const int);

#endif /* FUNCTIONS_H */
