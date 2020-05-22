#include "main.h"

int main() {
    //seed the random function
    srand(time(NULL));

    //set-up variables
    int searchValue = 0;
    int min = -1, max = -1;
    string found = "";

    //create an array of struct Data
    Data dataArray[ARRAYSIZE];

    //Fill the array with randome ids and strings
    fillData(dataArray, ARRAYSIZE);
    //show the array of structs
    displayArray(dataArray, ARRAYSIZE);
    cout << endl;

    //Ask the user for an id and report the string associated with that id
    getInput(&searchValue);
    cout << endl << "Searching for the string with the id " << searchValue << "... " << endl;
    found = searchArray(dataArray, searchValue, ARRAYSIZE);
    if (found != "") {
        cout << "Found '" << found << "' with the id " << searchValue << endl;
    } else {
        cout << "ID " << searchValue << " was not found." << endl;
    }
    cout << endl;

    //Show the min and max ids
    min = searchMinMax(dataArray, ARRAYSIZE);
    cout << "The minimum id is " << min << endl;
    max = searchMinMax(dataArray, ARRAYSIZE, false);
    cout << "The maximum id is " << max << endl;

    cout << endl;
    return 0;
}

