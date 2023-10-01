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

    cout << "Last Name: ";
    getline (cin, lastName);

    cout << "First Name: ";
    getline (cin, firstName);

    cout << "Middile Initial: ";
    cin >> middleInitial;

    cin.ignore();

    cout << "Address: ";
    getline (cin, address);

    cout << "Contact Number: ";
    getline (cin, contactNumber);

    cout << "Birth Year: ";
    cin >> birthYear;

    cout << "Enter Letter 'S' if you are a scholar, if not press any other key: ";
    cin >> letter;

    cout << "Sex M or F: ";
    cin >> sex;

    cin.ignore();


        double att, sw, recit, quiz, labEx, termEx, ave;


    cout << "Attendance Score: ";
    cin >> att;

    cout << "Seatworks Score: ";
    cin >> sw;

    cout << "Recitations Score: ";
    cin >> recit;

    cout << "Quizzes Score: ";
    cin >> quiz;

    cout << "Laboratory Exercises: ";
    cin >> labEx;

    cout << "Term Exam Score: ";
    cin >> termEx;

        double attperc = 0.10;
        double swperc = 0.15;
        double recitperc = 0.10;
        double quizperc = 0.20;
        double labExperc = 0.25;
        double termExperc = 0.20;

        ave = (att * attperc) + (sw * swperc) + 
              (recit * recitperc) + (quiz * quizperc) + 
              (labEx * labExperc) + (termEx * termExperc);

        age = 2023 - birthYear;
        string fullname = firstName + " " + middleInitial + ". " + lastName;

    cin.ignore();

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

        string grade;

    if (ave >= 98) {

        grade = "1.00";

    } else if (ave >= 95) {

        grade = "1.25";

    } else if (ave >= 92) {

        grade = "1.50";

    } else if (ave >= 89) {

        grade = "1.75"; 

    } else if (ave >= 85) {

        grade = "2.00";

    } else if (ave >= 82) {

        grade = "2.25";

    } else if (ave >= 80) {

        grade = "2.50";

    } else if (ave >= 77) {

        grade = "2.75";

    } else if (ave >= 75) {

        grade = "3.00";

    } else {

        grade = "5.00";

    }

    cout << "Grade: " << ave << endl;
    cout << "Grade Marks: " << grade << endl;

    switch (grade[0]) 
{
    case '1':
        
        switch (grade[2]) 
        {
            
            case '0':
                cout << "With Highest Honor" << endl;
                break;
            
            case '2':
                cout << "With High Honor" << endl;
                break;
            
            case '5':
                cout << "With Honor" << endl;
                break;
       }
        break;

            default:
               cout << "Below 1.50 Study Harder" << endl;

        break;
}

    
    return EXIT_SUCCESS;

}