
/***********************************************************
Name: Jovanni ELias
Assignment: coding 06
Purpose: to sort and search an array of pointers to structs
Notes: 
***********************************************************/


#include "functions.h"

int random_range(int min, int max) {
    //returns a random number between min and max inclusive
    return (rand() % (max - min + 1)) +min;
}

string random_string(const int SIZE) {
    /* pass in the size of the string
     * return a string with a random characters including A-Z, a-z, 0-1
     * up to size SIZE */

    char tempstr[SIZE];
    int choice;

    for (int i = 0; i < SIZE - 1; i++) {
        choice = random_range(1, 3);
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

void fillData(Data **array, const int size) {
    /* allocate memory and fill data */

    for (int i = 0; i < size; i++) {
        array[i] = new Data;
        array[i]->id = random_range(MINID, MAXID);
        array[i]->data = random_string(MAXSTRINGSIZE);
    }
}

void displayArray(Data **array, const int size) {
    //display the Data array declared in main
    for (int i = 0; i < size; i++) {
        cout << i << ": " << array[i]->id << " " << array[i]->data << endl;
    }
}

void swap(/* fill this in */) {
    /* code here */
}

void bubbleSortArray(/* fill this in */) {
    /* code here */
}

int binarySearchArray(/* fill this in */) {
    /* code here */
}
