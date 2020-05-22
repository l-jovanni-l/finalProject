//g++ -std=c++11 -I ./ main.cpp functions.cpp
/***********************************************************
Name: Jovanni Elias
Assignment: coding 03
Purpose: Cleans a string by triming spaces and removing extra spaces from a string with the max size of 15 charcaters
Notes: 
**********************************************************/
#include "functions.h"
string trim_string(string line){	 
	int stringLen = line.length();
	
	int firstChar = line.find_first_not_of(" ");	 
	int lastChar = line.find_last_not_of(" ");	
		
	/* Get the length of the string */
	int lengthToExtract = stringLen - (firstChar + (stringLen - lastChar - 1));;
	
	/* the substring takes out a piece of the string */
	return line.substr(firstChar, lengthToExtract );	//think of firstChar and lastChar as the range. of the substring
	//so up top you are taking the range of the firstChar and the lastChar and putting it back to line.
}
 
void clean_string_spaces(char output[], string line, const int SIZE){	// Here i gave the char[] the name of output. String is line. never changing int const named SIZE. 

	string trimmed_line = trim_string(line);
	cout << "Trimmed line: [" << trimmed_line << "]" << endl;				
	int size = trimmed_line.length();
	
	for(int i=0;i<size;i++){
		for (int j=0;j<size;j++){
			if (trimmed_line[i] != ' '){	// This loop is works
				output[j] = trimmed_line[i];
			cout << output[j];
			} 
			else if (trimmed_line[i] == ' '){	
			
			}	
		}		
	}
}
	