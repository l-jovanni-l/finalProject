/***********************************************************
Name: Jovanni ELias
Assignment: coding 07
Purpose: 
Notes: 
***********************************************************/

#include "main.h"

int main() {

    /*
     * This is your test data. In a normal real-world application
     * this data would likely come from a database or a file, but
     * for testing purposed, it is just hard-coded here.
     */
    string names[DATASIZE] = {"George", "Mary", "Jean", "Paul", "Tom"};
    int ages[DATASIZE] = {29, 19, 30, 42, -1};
    string foods[DATASIZE] = {"tacos", "pizza", "", "steak", "candy corn"};

    cout << "Creating a People object... ";
    People people(names, ages, foods, DATASIZE);
    cout << "Done." << endl << endl;
    cout << "displaying all people in the People object... " << endl;
    people.displayPeople();
    cout << endl;
    
    cout << "Clearing all people from the People object... ";
    people.clear();
    cout << "Done." << endl << endl;

    cout << "Displaying all people in the People object... " << endl;
    people.displayPeople();
    cout << endl;
    
    return 0;
}