#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {

    double hOw, rPh, bp, tax, np;

    cout << "Enter Hours of Work: ";
    cin >> hOw;

    cout << "Enter Rate per Hour: ";
    cin >> rPh;

    bp = hOw * rPh;

    if (bp <= 15000) {

        tax = bp * 0.05;

    } else if (bp < 25000) {

        tax = bp * 0.07;

    } else {

        tax = bp * 0.10;
    
    }

    np = bp - tax;

        cout << "Basic Pay: $" << bp << endl;
        cout << "Tax: $" << tax << endl;
        cout << "Net Pay: $" << np << endl;

    return EXIT_SUCCESS;

}