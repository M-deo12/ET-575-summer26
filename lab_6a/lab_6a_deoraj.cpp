/*
Matthew Deoraj
june 2, 2026
ChatGPT


*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string new_word;

    cout << "------------------------------ EXERCISE ------------------------------" << endl;

    cout << "Type a word: ";
    cin >> new_word;

    cout << "The 4th character is: " << new_word[3] << endl;

    cout << "The length of the word is: " << new_word.length() << " characters." << endl;

    new_word.replace(1, 3, "-- $ --");
    cout << "After replacement: " << new_word << endl;

    new_word.erase(new_word.length() - 2, 2);
    cout << "After removing two characters from the end: " << new_word << endl;

    return 0;
}