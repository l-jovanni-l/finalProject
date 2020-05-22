#include "functions.h"

bool is_numeric(string str) {
    //matches a string of only digit characters
    return regex_match(str, regex("(\\+|-)?[0-9]*(\\.?([0-9]+))$"));
}

int random_range(int min, int max) {
    //returns a random number between min and max inclusive
    return (rand() % (max - min + 1)) +min;
}

void displayArray(Data *array, const int size) {
    //display the Data array declared in main
    for (int i = 0; i < size; i++) {
        cout << array[i].id << ": " << array[i].data << endl;
    }
}

void getInput(int *value) {
    //asks the user for an id between 100 and 999 and forces a correct response
    string input;

    while (*value < 100 || *value > 999) {
        cout << "Enter an id between 100 and 999 to search: ";
        getline(cin, input);
        if (is_numeric(input)) {
            *value = stoi(input);
        }
        if (*value < 100 || *value > 999) {
            cout << "Error" << endl << endl;
        }
    }
}

string random_string(const int SIZE) {
    /*
     * pass in the size of the string
     * return a string with a random characters including A-Z, a-z, 0-1
     */
	char tempstr[SIZE];
	int choice;
	
	for (int i = 0; i < SIZE - 1; i++){
		choice = random_range(1,3);
		switch (choice) {
			case 1:
				tempstr[i] = random_range('A', 'Z');
				break;
			case 2:
				tempstr[i] = random_range('a', 'z');
				break;
			case 3:
				tempstr[i] = random_range('0', '9');
				break;
		}
	}
	tempstr[SIZE - 1] = '\0';
    return tempstr;
}

void fillData(Data *array, const int size) {
    /*
     * passed in a Data array by reference and the size of the array
     */
	 
	 
     /* fill the ids with random ids from 100-999 inclusive
     * using random_range()
     */
	 for (int i = 0; i < size; i++){
		array[i].id = random_range(MINID, MAXID);
		array[i].data = random_string(MAXSTRINGSIZE);
		}
	 }
	 
     /* fill the string with a random string including A-Z, a-z, 0-1
     * up to size MAXSTRINGSIZE using random_string()
     */
	 


string searchArray(Data *haystack, const int needle, const int SIZE) {
    /*
     * passed in a Data array by reference, the search value,
     * and the size of the array
     * 
     * return the string found at that id or an empty string if not found
     */
	 string foundString = "";
	 
	 for (int i=0; i<SIZE && foundString == ""; i++){	//start at the beginning and go to the end until you find it
		if (haystack[i].id == needle) {
			foundString = haystack[i].data;
		}
	 }
    
    return foundString;
}

int searchMinMax(Data *array, const int SIZE, bool min) {
    /*
     * passed in a Data array by reference, and the size of the array,
     * and a bool telling the function to search for min (true) or
     * the max (false), with the bool defaulting to true.
     */
	int minmax;
	if (min) {
		minmax = MAXID + 1;
		for ( int i=0; i<SIZE; i++) {
			if (array[i].id < minmax) {
				minmax =  array[i].id;
			}
		}
	} else {
		minmax = MINID - 1; 
		for (int i=0; i<SIZE; i++) {
			if (array[i].id > minmax) {
				minmax = array[i].id;
			}
		}
	}
	
	return minmax;
}





