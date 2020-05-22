//g++ -std=c++11 -I ./ main.cpp functions.cpp
/***********************************************************
Name: Jovanni Elias
Assignment: coding 02
Purpose: This program will spit out the input you put and and if the input is a number and or file it will let you know
Notes: 
***********************************************************/
#include "main.h"



/************************************/
int main(int argc, char **argv){

/* This code checks if you inputed one file only.  */

if (argc != 2){
	cout << "You did not enter the correct number of parameters" << endl;
	cout << "Please enter 1 parameter which is the name of a file to display.";
}
else{
/* Checks to see if the input is a file and opens it */
	ifstream infile;	//Creates an object called infile with the datatype ifstream 

    infile.open(argv[1]);	//Open the object (infile). It's argv[1] beacuse the [1] gives you the name of the file, not the call of the executable
    if (infile) {			//if the file exists call the function in the next line.
        output_file_contenents(infile);			//calls the function output_file_contenents using the infile object
    } else {
        cout << "File '" << argv[1] << "' is not valid" << endl;	// if it doesn not open or accept the file input this message
    }
	infile.close();	//close the file so that next time you try and read something it wont read a previous file. Also if it is not locked the OS will lock the file
					// and no one will be able to read from it and it'll be locked for ever.
}
  return 0;
}

/* Also check  for the amount of words for each string. tip was to 
count the number of spaces plus one. because if there are 3 words there are two 
in between each word and then the last one does not have a space at the end. */











/* Questions. 
1. How do  i straight up just call a function. 
2. How to open a file 
3. How to read the file
4. How to count the number of lines
 */