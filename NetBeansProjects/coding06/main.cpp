
/***********************************************************
Name: Jovanni ELias
Assignment: coding 06
Purpose: to sort and search an array of pointers to structs
Notes: 
***********************************************************/

#include "main.h"

int main() {
    //seed the random function
    srand(time(NULL));
    int find, found;

    //create an array of pointers to struct Data
    Data * dataArray[ARRAYSIZE];

    /* Allocate memory for the structs, assign to pointers
     * then fill the array with random ids and strings */
    fillData(dataArray, ARRAYSIZE);
    displayArray(dataArray, ARRAYSIZE);
    cout << endl;

    //sort and display array
    bubbleSortArray(dataArray, ARRAYSIZE);
    displayArray(dataArray, ARRAYSIZE);
    cout << endl;

    /*
     * search the array repeatedly for random ids
     * this will test binarySearchArray() TESTSIZE times
     */
    for (int i = 0; i < TESTSIZE; i++) {
        find = random_range(MINID, MAXID);
        found = binarySearchArray(dataArray, 0, ARRAYSIZE, find);
        if (found != -1) {
            cout << find << " found at index " << found << endl;
        } else {
            cout << find << " not found" << endl;
        }
    }

    cout << endl;
    return 0;
}
