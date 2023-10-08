#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {

    string lastName1, lastName2, lastName3, lastName4, lastname5;
    double num1, num2, num3, square, cube, ave;

    cout << " " << endl;
    cout << "GROUP 8" << endl << endl;

    cout << "Last Name of Seat #36: ";
    getline (cin, lastName1);

    cout << "Last Name of Seat #37: ";
    getline (cin, lastName2);

    cout << "Last Name of Seat #38: ";
    getline (cin, lastName3);

    cout << "Last Name of Seat #39: ";
    getline (cin, lastName4);

    cout << "Last Name of Seat #40: ";
    getline (cin, lastname5);

    cin.ignore();

    cout << "GIVE 3 NUMBERS" << endl << endl;

    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter Second Number: ";
    cin >> num2;

    cout << "Enter Third Number: ";
    cin >> num3;

        square = num1 * num1;
        cube = num2 * num2 * num2;
        ave = (num1 + num2 + num3) / 3;

    cout << " " << endl;

    cout << "Square of the First Number: " << square << endl;
    cout << "Cube of the Second Number: " << cube << endl;
    cout << "Average of the Three Numbers: " << ave << endl << endl;

    return EXIT_SUCCESS;

}

//create a c++ program that  will input the lastname of each member of your group... 
//then input three numbers and then compute and display the square of the first number, 
//the cube of the swcond number, and the average of the three numbers..