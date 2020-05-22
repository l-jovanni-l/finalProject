#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <regex>
#include "data.h"
#include <string>

#define MINID 100
#define MAXID 999
#define MAXSTRINGSIZE 12

using std::cout;
using std::endl;
using std::regex;
using std::cin;
using std::string;

//written for you
void displayArray(Data*, const int);
int random_range(int, int);
bool is_numeric(string str);
void getInput(int*);

//write these
string random_string(const int);
void fillData(Data*, int);
string searchArray(Data*, int, const int);
int searchMinMax(Data*, const int, bool = true);

#endif /* FUNCTIONS_H */

