/*
Matthew Deoraj
Lottery Program
*/

#include <iostream>
using namespace std;

const int SIZE = 5;

// Function 1: checks if a number repeats
bool checkRepeats(int arr[], int currentIndex, int number) {
    for (int i = 0; i < currentIndex; i++) {
        if (arr[i] == number) {
            return true;
        }
    }

    return false;
}

// Function 2: generates winning digits without cstdlib
void winningDigits(int winning[]) {
    int seed;

    cout << "Enter a starting number for lottery generator: ";
    cin >> seed;

    if (seed < 0) {
        seed = seed * -1;
    }

    seed = seed % 19;

    for (int i = 0; i < SIZE; i++) {
        seed = (seed + 7) % 19;
        winning[i] = seed + 1;
    }
}

// Function 3: gets the user's ticket numbers
void userTicket(int ticket[]) {
    for (int i = 0; i < SIZE; i++) {
        int number;
        bool valid = false;

        while (valid == false) {
            cout << "Enter number " << i + 1 << " between 1 and 19: ";
            cin >> number;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input. Enter numbers only." << endl;
            }
            else if (number < 1 || number > 19) {
                cout << "Invalid number. Try again." << endl;
            }
            else if (checkRepeats(ticket, i, number)) {
                cout << "Repeated number. Try again." << endl;
            }
            else {
                ticket[i] = number;
                valid = true;
            }
        }
    }
}

// Function 4: counts how many numbers match
int checkWinner(int winning[], int ticket[]) {
    int matches = 0;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (winning[i] == ticket[j]) {
                matches++;
            }
        }
    }

    return matches;
}

// Function 5: prints the result
void printResult(int winning[], int ticket[], int matches) {
    cout << "\nWinning digits = ";
    for (int i = 0; i < SIZE; i++) {
        cout << winning[i] << " ";
    }

    cout << "\nUser ticket =     ";
    for (int i = 0; i < SIZE; i++) {
        cout << ticket[i] << " ";
    }

    cout << "\nMatch numbers = " << matches << endl;
}

int main() {
    int winning[SIZE];
    int ticket[SIZE];
    int matches;

    winningDigits(winning);
    userTicket(ticket);

    matches = checkWinner(winning, ticket);

    printResult(winning, ticket, matches);

    return 0;
}