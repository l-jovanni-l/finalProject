//g++ -std=c++11 -I ./ main.cpp functions.cpp
/***********************************************************
Name: Jovanni Elias
Assignment: coding 03
Purpose: Cleans a string by triming spaces and removing extra spaces from a string with the max size of 15 charcaters
Notes: 
**********************************************************/

#include "main.h"

int main() {

    /* this will be used to capture user input
     * note that line does not need size checking because its a string object */
    string line;

    /* this will be used to pass to clean_string()
     * note it is a character array and requires size checking */
    char output_string[BUFFER_SIZE];

    // ask the user for input
    cout << endl << "Enter 0 or more words with any number of spaces: ";
    getline(std::cin, line);	//The input from the user is now stored in line. Line is used is functions.cpp also. 

    // show the user the string as it was entered
    cout << "You entered: ";
    cout << "\"" << line << "\"" << endl;

    // clean the string of extra spaces
    clean_string_spaces(output_string, line, BUFFER_SIZE);

    // show the user the final string in the character array
    cout << "It has been cleaned and now is: ";
    cout << "\"" << output_string << "\"" << endl << endl;

    return 0;
}
