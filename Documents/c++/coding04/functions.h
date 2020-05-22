/***********************************************************
Name: Jovanni Elias
Assignment: coding 04
Purpose: To make me struggle... and fill a 2d array of rows 
and columns with random numbers then get the average of each row.
Notes: this file was easy
***********************************************************/
#include <cstdlib>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;


float simple_random();
float** make_2d_array(const int, const int);
void init_2d_array(float**, const int, const int);
void print_2d_array(float**, const int, const int);
float avg_row(float[], const int);
