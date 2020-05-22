//g++ -std=c++11 -I ./ main.cpp functions.cpp
/***********************************************************
Name: Jovanni Elias
Assignment: coding 01
Purpose: This program will spit out the input you put and and if the input is a number and or file it will let you know
Notes: It was so hard for me to realize the counter was "i". Ill try and remember to ask you when i see you
***********************************************************/
#include "main.h"

int main(int argc, char **argv){
	cout << "The number of parameters is (not counting the program itself): " << argc -1 << endl;
	/* Begin loops that says ignore the calling name and get the amount of string inputed and their value 
	   If the values are not a number, check for a file if not then just give the name of the input*/
	for (int i=1; i < argc; i++){ 
	if ((is_numeric(argv[i])) && (is_file(argv[i]))){
		cout << "\t Parameter:" << i << " " << argv[i] << " (number)(file)" << endl;
	} else{
		if (is_numeric(argv[i])){
		cout << "\t Parameter:" << i << " " << argv[i] << " (number)" << endl; 
		} else {
			if (is_file(argv[i])) {
			cout << "\t Parameter:" << i << " " << argv[i] << " (file)" << endl;
			} else {
				cout << "\t Parameter:" << i << " " << argv[i] << endl;
				} 
			}
		}
	}
	return 0;
}

/* "The number of parameters is (not counting the program itself): " */

/* "Parameter " << argc[i] << */