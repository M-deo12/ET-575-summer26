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


/*
1) the code was compiled and ran successfully without any errors. also it was very similar to code i made in class.
2)it was easy to understand it was what we used in class but when complied in chat gpt it was just one big line of code i had to maunally space out.
3) the code is very similar to what we did in class and it was easy to understand. the only thing that was different was the spacing of the code when it was compiled in chat gpt.
4)it used exactly the same functions and methods that we used in class so it was very easy to understand. the only thing that was different was the spacing of the code when it was compiled in chat gpt.
5)Type a word: Terminal
The 4th character is: m
The length of the word is: 8 characters.
After replacement: T-- $ --inal
After removing two characters from the end: T-- $ --in




*/