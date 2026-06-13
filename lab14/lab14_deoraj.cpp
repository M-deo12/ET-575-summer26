/*
Matthew Deoraj
june 12, 2026
lab 14
*/

#include <iostream>
using namespace std;

// Function 1: input and validate marks
int inputMarks() {
    int mark;

    cout << "Enter mark from 0 to 100: ";
    cin >> mark;

    while (mark < 0 || mark > 100) {
        cout << "Invalid mark. Enter mark from 0 to 100: ";
        cin >> mark;
    }

    return mark;
}

// Function 2: calculate total marks
int totalMarks(int m1, int m2, int m3) {
    return m1 + m2 + m3;
}

// Function 3: calculate percentage by calling totalMarks()
float calculatePercentage(int m1, int m2, int m3) {
    float percentage;

    percentage = (totalMarks(m1, m2, m3) / 300.0) * 100;

    return percentage;
}

// Function 4: determine grade based on percentage
char determineGrade(float calculatePercentage) {
    char grade;

    if (calculatePercentage >= 90 && calculatePercentage <= 100) {
        grade = 'A';
    }
    else if (calculatePercentage >= 80 && calculatePercentage <= 89) {
        grade = 'B';
    }
    else if (calculatePercentage >= 70 && calculatePercentage <= 79) {
        grade = 'C';
    }
    else if (calculatePercentage >= 60 && calculatePercentage <= 69) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    return grade;
}

// Function 5: display result
void displayResult(int m1, int m2, int m3, char grade) {
    cout << "\nWith marks " << m1 << ", " << m2 << ", " << m3
         << ", the GRADE is " << grade << endl;
}

int main() {
    int mark1, mark2, mark3;
    float percentage;
    char grade;

    cout << "\n-------Student Final Grade Program-------" << endl;

    cout << "\nSubject 1" << endl;
    mark1 = inputMarks();

    cout << "\nSubject 2" << endl;
    mark2 = inputMarks();

    cout << "\nSubject 3" << endl;
    mark3 = inputMarks();

    percentage = calculatePercentage(mark1, mark2, mark3);

    grade = determineGrade(percentage);

    displayResult(mark1, mark2, mark3, grade);

    return 0;
}