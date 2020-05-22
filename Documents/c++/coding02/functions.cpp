/***********************************************************
Name: Jovanni Elias
Assignment: coding 02
Purpose: This program will spit out the input you put and and if the input is a number and or file it will let you know
Notes: I fixed line 20. I changed wordCnt == 0 to wordCnt == 1.
		I added a bool value int he count_words function
***********************************************************/

#include "functions.h"

void output_file_contenents(ifstream& infile)
{
	string line; 			//creates a string object called line 
	int lineNum = 0;		// integer variable named lineNum initialized witht the value 1
	
	while(getline(infile, line))	// While there is a line of text in the file store it in the line variable
	{
		cout << lineNum++ << ": " <<  line << " " << '[';		// spit out line number and the contenents of a string
		
		int wordCnt = count_words(line);
		if(wordCnt == 0)		//This has to be 1 because at the end of the function count_words i added 1 so it will never be 0.
		{
			cout << "blank line";
		}
		else
		{
			cout << wordCnt << " words";
		}
		cout << ']' << endl;
	}
}

int count_words(string line) { //start a function called count_words and pass the string variable line
	int count = 0;				// Start a counter at 0
	int length = line.length();	// 
	bool letterFound=false;		//setting a bool varibale datatype with the name letterFound and set it to false
	for(int i=0; i < length; i++) {
		if (line[i] == ' '){	//if i find a space add it to the count. otherwise if i dont find a space go to else. 
			count++;
		}
		else
		{
			letterFound = true;	//if it finds anything other than a space set to true. 
		}
	}
	if (letterFound) count++;	// if i find a character add it to the count. 
	else count = 0;				
	return count;
}

