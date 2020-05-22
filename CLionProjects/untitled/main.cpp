#include <iostream>
using namespace std;
int main() {

    string myName;

    cout << "What is your name? " << endl;
    getline(cin, myName);
    cout << myName << " is a pretty cool name my dude!\n";
    int nameSize = myName.length();

    cout << "Your name is less than " << nameSize << " letters long!";

    return 0;
}