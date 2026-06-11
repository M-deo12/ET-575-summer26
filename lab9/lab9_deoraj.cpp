/*
Matthew Deoraj
June 4,2026
Lab 9: switch-case statemnt 
*/

#include <iostream>

using namespace std;

int main() {
 cout<<"\n---example 1:switch-case statement--"<<endl;
 //ask the user to select a day off (number)
 //declare varibles
 int dayoff=0;

 //collect dayoff
 cout<< "select a day off:"<<endl;
 cout<<"1 for MONDAY"<<endl;
    cout<<"2 for TUESDAY"<<endl;
    cout<<"3 for WEDNESDAY"<<endl;
    cout<<"4 for THURSDAY"<<endl;
    cout<<"5 for FRIDAY"<<endl;

    cin >> dayoff;

    //switch-case statement
    switch(dayoff)

{
    case1:
    cout<<"You are off Monday"<<endl;
    break;
    case2:
    cout<<"You are off Tuesday"<<endl;
    break;
    case3:
    cout<<"You are off Wednesday"<<endl;
    break;
    case4:
    cout<<"You are off Thursday"<<endl;
    break;
    case5:
    cout<<"You are off Friday"<<endl;
    break;
    default:
    cout<<"Wrong dayoff:"<<endl;
    break;

}

cout<<"\n--------example 2:select gender--------"<<endl;
//select gender
char gender;
string selectgender="";


//collect gender
cout<<"select a gender"<<endl;
cout<<"M for MALE"<<endl;
cout<<"F for FEMALE"<<endl;
cout<<"O for OTHER"<<endl;
cin>>gender;

//switch-case
switch(gender)
{
    case 'M':
    selectgender="Male";
    break;
    case 'F':
    selectgender="Female";
    break;
    case 'O':
    selectgender="Other";
    break;
default:
    selectgender="UNKNOWN";
    break;
}
// print results
cout<<"selected gender = "<<selectgender<<endl;

 cout<<"\n----Excercise----"<<endl;
 int number = 0;
char choice;

cout << "Type a number: ";
cin >> number;

cout << "Do you want to double the number?" << endl;
cout << "Y or y for yes" << endl;
cout << "N or n for no" << endl;
cin >> choice;

switch(choice)
{
    case 'Y':
    case 'y':
        number *= 2;
        break;

    case 'N':
    case 'n':
        number = number;
        break;

    default:
        number = 0;
        break;
}

cout << "The number is set to " << number << endl;
 
 
 
    return 0;
}