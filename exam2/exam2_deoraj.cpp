/* 
Matthew Deoraj
Exam 2 
June 14, 2026
*/

#include <iostream>
using namespace std;

// global variable
const int dimension = 10;

int main() {
    // question 1 
    int number;

    do {
        cout << "Enter a number greater than or equal to 10: ";
        cin >> number;

        if (number < 10) {
            cout << number << " is invalid. ";
        }

    } while (number < 10);

    cout << number << " is a valid number!" << endl;


    cout << "\n----Question 2-----" << endl;

    int num1, num2;
    int minimum, maximum;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    if (num1 < num2) {
        minimum = num1;
        maximum = num2;
    }
    else {
        minimum = num2;
        maximum = num1;
    }

    cout << "RESULT = ";

    int counter = minimum;

    while (counter <= maximum) {
        cout << counter << " ";
        counter++;
    }

    cout << endl;


    cout << "\n----Question 3-----" << endl;

    for (int row = 0; row < dimension; row++) {
        for (int col = 0; col < dimension; col++) {

            if ((row == 2 && (col == 3 || col == 5)) ||
                (row == 3 && (col == 2 || col == 3 || col == 5 || col == 6)) ||
                (row == 4 && (col >= 2 && col <= 6)) ||
                (row == 5 && (col >= 3 && col <= 5)) ||
                (row == 6 && col == 4)) {
                
                cout << "% ";
            }
            else {
                cout << ". ";
            }
        }

        cout << endl;
    }

    return 0;
}