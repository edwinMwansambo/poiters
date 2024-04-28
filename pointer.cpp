#include <iostream>
#include <string>
using namespace std;
int main() {

    //initialise pointer
    int *pdynamicInteger;
    // Dynamically allocate integer
    pdynamicInteger = new int;

    //initialise pointer
    string *pdynamicString;
    // Dynamically allocate a string
    pdynamicString = new string;

    //  to enter inerger
    cout << "Enter an integer value: "<<endl;
    cin >> *pdynamicInteger;

    //  enter a string
    cout << "Enter a string value: "<<endl;
    cin.ignore(); // Ignore the newline 
    getline(cin,*pdynamicString);

    // Output the dynamically allocated integer value
    cout << "Dynamically allocated integer value: " << *pdynamicInteger << endl;

    // Output the dynamically allocated string value
    cout << "Dynamically allocated string value: " << *pdynamicString << endl;

    // Deallocate the dynamically allocated memory
    delete pdynamicInteger;
    delete pdynamicString;

    return 0;
}