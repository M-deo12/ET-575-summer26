/*
matthew deoraj
june 12, 2026
lab 13: intro to functions
Main FUNBCTIUON
*/

#include <iostream>
using namespace std;

//example 1: void function
// void function, does not reutn value.

void printhi() {
cout<<"Hell0 Function: "<<endl;
return; //for a void function return is empty

//example 2: void function with parameter
//function that prints a name with a message
// the name is passed to the function

void greeting (string username) {

    cout<<"Good morning: "<<username<<endl;

}

//example 3: function that returnss a valuerer
int dbnumber(int n) {
return n*2;
}
// example 4:function that returns the area of as rectangle 
float arearectangle(int width, int lengtht) {
}

//example 5: function thaat checks if a is postive, negative or zero
string checknumber (int number) {

if (number >0)
return "postive";
else if (number <0)
return "negative"
else
return "zero";
}
// example 6:compsotion of function
int positivenumber(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    while(n<=0){

        cout<<"Error Enter a positive number: ";
        cin>>n;
    } 
    return n;
}
// Function 1: collect a valid integer from 1 to 10
int getNumber() {
    int num = 0;

    cout << "Enter a number between 1 and 10: ";
    cin >> num;

    while (num < 1 || num > 10) {
        cout << "Invalid number. Enter a number between 1 and 10: ";
        cin >> num;
    }

    return num;
}

// Function 2: print numbers from the collected number up to 15
void printNumbers(int num) {
    cout << "\nNumbers from " << num << " up to 15:" << endl;

    for (int i = num; i <= 15; i++) {
        cout << i << " ";
    }

    cout << endl;
}

// Function 3: count numbers that are NOT multiples of 3
int countNotMultiplesOf3(int num) {
    int count = 0;

    for (int i = num; i <= 15; i++) {
        if (i % 3 != 0) {
            count++;
        }
    }

    return count;
}

// Function 4: print the final result
void printResult(int num, int count) {
    cout << "\nFrom " << num << " up to 15, there are "
         << count << " number/s that are not multiples of 3." << endl;
}



int main () {
cout<<"\n --- example 1: Void function" <<endl;
printhi();
printhi();
printhi();

cout<<"\n --- example 2: Void function with arguemnts" <<endl;
greeting( ("Peter");
string user = "Annie";
greeting(user);

cout<<"\n --- example 3: function that retuns a value" <<endl;
int x =dbnumber(6);
cout<<x<<endl;

cout<<"\n---example 4: function that retuns the area of a rectangle"<<endl;
float a = arearectangle(2,5,2);
cout<<"Area rectangle = "<<a<<endl;
    
cout<<"\n --- example 3: function that retuns a value" <<endl;
cout<<positvenumber();
int asquare = areasquare(side);

cout << "\n-------Lab Exercise: Functions-------" << endl;

    int collectedNumber = getNumber();

    printNumbers(collectedNumber);

    int result = countNotMultiplesOf3(collectedNumber);

    printResult(collectedNumber, result);





return 0;
}