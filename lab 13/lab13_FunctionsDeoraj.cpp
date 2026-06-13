/*
matthew deoraj
june 12, 2026
lab 13: intro to functions
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

//example 7


}




