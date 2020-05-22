/***********************************************************
Name: Jovanni Elias
Assignment: coding 01
Purpose: This program will spit out the input you put and and if the input is a number and or file it will let you know
Notes: It was so hard for me to realize the counter was "i". Ill try and remember to ask you when i see you
***********************************************************/

#include "functions.h"

bool is_numeric(string str) {
    return regex_match(str, regex("(\\+|-)?[0-9]*(\\.?([0-9]+))$"));
}

bool is_file(string str) {
    ifstream infile;

    infile.open(str);
    if (infile) {
        return true;
    } else {
        return false;
    }
}
