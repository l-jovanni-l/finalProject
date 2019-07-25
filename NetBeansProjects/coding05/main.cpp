/***********************************************************
Name: Jovanni ELias
Assignment: coding 05
Purpose: 
Notes: 
***********************************************************/

#include "main.h"

int main() {

    /*
     * Demonstrating making a dog object with akc = true
     */
    cout << "making dog #1" << endl;
    Dog myDog1("Fido", 4, true);
    displayDog(&myDog1);
    cout << endl;

    /*
     * Demonstrating making a dog object with akc = false
     */
    cout << "making dog #2" << endl;
    Dog myDog2("Spot", 1, false);
    displayDog(&myDog2);
    cout << endl;

    /*
     * Demonstrating making a dog with a negative age
     * and showing throwing and catching an error
     */
    cout << "making dog #3" << endl;
    try {
        Dog myDog3("Rex", -1, false);
    } catch (char const *error) {
        cout << "Error: " << error << endl;
    }
    cout << endl;

    /*
     * Demonstrating making a dog with an empty name
     * and showing throwing and catching an error
     */
    cout << "making dog #4" << endl;
    try {
        Dog myDog4("", 10, false);
    } catch (char const *error) {
        cout << "Error: " << error << endl;
    }
    cout << endl;

    /*
     * Demonstrating setting dog features
     */
    myDog1.setAge(8);
    myDog1.setName("Pluto");
    myDog1.setAkc(false);
    displayDog(&myDog1);
    cout << endl;
    
    /*
     * None of the following should compile. Before you submit your assignment,
     * uncomment these one at a time and test that fact. Then leave them
     * commented out to turn in your final version.
     */
    //Dog myDog;
    //Dog myDog("Tank");
    //Dog myDog(2);
    //Dog myDog("Tank", 2);

    cout << endl;
    return 0;
}

