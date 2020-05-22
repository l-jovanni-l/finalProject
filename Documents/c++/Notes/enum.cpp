/* g++ enum.cpp */
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>

#define NUMBER 10

using namespace std;

typedef enum weekdays {
	Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
} WEEKDAYS;
/* Everything above this line should be in the header file */

float simple_random(){
	return (float) (rand() % RAND_MAX) / (float) RAND_MAX;
}

int range_random(int min, int max) {
	return rand() % (max - min + 1) + min;
}

int main(int argc, char** argv) {
	srand(time(NULL));
	
	weekdays day1 = (WEEKDAYS)range_random(Monday, Sunday);// I want a random day from monday through sunday. Can only be read in C++
	enum weekdays day2 = (WEEKDAYS)range_random(Monday, Sunday);
	WEEKDAYS day3 = (WEEKDAYS)range_random(Monday, Sunday);
	cout << day1 << endl;
	cout << day2 << endl;
	cout << day3 << endl;
	return 0;
}