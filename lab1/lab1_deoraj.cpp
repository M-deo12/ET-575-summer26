/*
Matthew Deoraj May 28,2026
lab 1:iostream
*/
#include<iostream>
using namespace std;
 int main(){
    
    cout<<"Hello World!\n"<<endl;
    cout<<"Et 575\t\tMatthew Deoraj."<<endl;
    cout<<"\n====== example 2: declaring string and character varibles===="<<endl;
    /*
 varibles are only declared once 
 naming varible 
 -can't start with a number
 -can't have spaces
 -can't have any symbol excpet for underscore 
 -can't use C++ reserve keyword, example 'cout' 'int' 'string' 'main' etc.
3) a varible name is an identifier 
    */
    
    string user_name;
    user_name="PeterPan";

    cout<< "user_name =" << user_name <<endl;
    cout<<"Enter another user_name: ";
    cin >> user_name;
    cout <<"Updated user_name = " << user_name <<endl;

 cout<<"\n====== example 3: declaring character varibles===="<<endl;
 char symbol= '%'; 
 cout << "Character = "<<symbol <<endl;
 symbol=38;
 cout <<"Updated Character = "<<symbol <<endl;
// intiliaze a value for an identifier 
 char s(35);
cout << "symbol = "<<s <<endl;

cout <<"\n =======EXERCISE++++++======"<<endl;

string country;


char gender;
cout <<"Enter your country: ";
cin >> country;
cout <<"Updated country = "<<country <<endl;
cout <<"Character = "<<gender <<endl;
cout<<"Enter Your Gender: ";
cin >> gender;
cout <<"Updated gender"<<gender <<endl;
return 0;
}
