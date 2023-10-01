#include <iostream>
#include <string>

using namespace std;

int main() {
   
    cout << "Nueva Ecija University of Science and Technology" << endl;
    cout << "Sumacab Campus" << endl << endl;

    string lastName, firstName, address, contactNumber;
    char middleInitial;
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

    age = 2023 - birthYear;
    string fullname = firstName + " " + middleInitial + ". " + lastName;

    cout << "Full Name: " << fullname << endl;
    cout << "Address: " << address << endl;
    cout << "Contact Number: " << contactNumber << endl;
    cout << "Birth Year: " << birthYear << endl;
    cout << "Age: " << age << endl;
    
    return EXIT_SUCCESS;

}