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
 char number;
 string selectnumber="";
 
 
 cout<<"Type a Number :"<<endl;
 cout<<"Y for yes"<<endl;
cout<<"N for no"<<endl;
 cin>>number;
 
 
 
    return 0;
}