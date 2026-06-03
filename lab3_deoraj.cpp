/*
Matthew Deoraj
june 1 ,2026
lab 3:numerical varibles
*/
#include<iostream>
using namespace std;
int main(){

    cout<< "\n===example 1 :numerical variables=="<<endl;
//int, short, or long data type only takes the whole number 
    int number =5.9;
    cout<<"The number is="<<number<<endl;
// float or double data type takes the number as it is, the whole numbeer with the decimal places.
//double is double the memory size of float.  
double number1=3.123456789;
float number2=9.123456789;
cout<<"The double dat type ="<<number1<<endl;
cout<<"The float data type ="<<number2<<endl;

 cout<< "\n===example 2: Constant Varibles=="<<endl;
number=23.65;
cout<<"The Updated number ="<<number<<endl;
//you cannot use Int twice,instade just change the value of the number.
const float EXP=2.718;
cout<<"The value of EXP="<<EXP<<endl;
// read only varibles are constant varibles that cannot be changed after.


 cout<< "\n===example 3:calculate the height of falling object=="<<endl;
// declare the variables
const float GRAVITY=9.8;
float time =0, height=0;

cout<<"Enter the time:";
cin>>time;
// calculate the height of a a falling object=1/2*g*t*t
height=0.5*GRAVITY*time*time;

// print results 
cout<<"The height of a falling object at"<<time<<"is:"<<height<<"meters."<<endl;

 cout<< "\n===example 4:Calculate the circumference of a circle=="<<endl;
// formula circumference = 2*radius*pi
const float PI=3.14159;
 float circumference=0, radius=0;

 //collect the radius
 cout<<"Enter the radius:";
    cin>>radius;
//calculate the circumference of a circle
circumference=2*PI*radius;
// print results
cout<<"The circumference of a circle with radius "<<radius<<" is "<<circumference<<" units."<<endl;

 cout<< "\n===Excercise=="<<endl;
//declare the variables
int r=0;
cout<<"Enter the radius of a circle:";
cin>>r;

// calculate the area of a circle and the volume of a sphere
float area=  PI*r*r;
cout<<"The area of a circle with radius "<<r<<" is "<<area<<" units."<<endl;

float volume= (4.0/3.0)*PI*r*r*r;
cout<<"The volume of a sphere with radius "<<r<<" is "<<volume<<endl;
 return 0;
}




