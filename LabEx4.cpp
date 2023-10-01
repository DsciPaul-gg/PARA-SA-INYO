#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
   
    cout << "Nueva Ecija University of Science and Technology" << endl;
    cout << "Sumacab Campus" << endl << endl;

    string lastName, firstName, address, contactNumber, letter;
    string const letterS = "S";
    char middleInitial, sex;
    int birthYear, age;

    cout << "Enter Last Name: ";
    getline (cin, lastName);

    cout << "Enter First Name: ";
    getline (cin, firstName);

    cout << "Enter Middile Initial: ";
    cin >> middleInitial;

    cin.ignore();

    cout << "Enter Address: ";
    getline (cin, address);

    cout << "Enter Contact Number: ";
    getline (cin, contactNumber);

    cout << "Enter Birth Year: ";
    cin >> birthYear;

    cout << "Enter a Letter: ";
    cin >> letter;

    cout << "Sex: ";
    cin >> sex;

    age = 2023 - birthYear;
    string fullname = firstName + " " + middleInitial + ". " + lastName;

    cout << " " << endl << endl;
    
    cout << "Full Name: " << fullname << endl;
    cout << "Address: " << address << endl;
    cout << "Contact Number: " << contactNumber << endl;
    cout << "Birth Year: " << birthYear << endl;
    cout << "Age: " << age << endl;
    
    if (letter == letterS) {

        cout << "Remarks: Scholar" << endl;

    } else {

        cout << "Remarks: Not a Scholar" << endl;

    }
    
    switch (sex) {

        case 'M':
        case 'm':

        cout << "Sex: Male" << endl;

    break;

        case 'F':
        case 'f':

        cout << "Sex: Female" << endl;

    break;

    default:

        cout << "Error: Enter a Valid Sex (M or F)" << endl;

    }

    return EXIT_SUCCESS;

}