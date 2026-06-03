/*
Matthew Deoraj
june 1 ,2026
lab 4:lab4 
*/




#include <iostream>
using namespace std;
int main(){

cout<< "\n===example 1 :assigment operator=="<<endl;
int n=9,m=2;
cout<<"n="<<n<<endl;

// add1 to n and update the value 
n++;
cout<<"updated n"<<n<<endl;

//subtract 1 from m and update the value
m--;
cout<<"updated m="<<m<<endl;

// add m value into n and update value of n
n+=m;
cout<<"updated n="<<n<<endl;

//triple the value of m and updaate m
m*=3; //m=m*3
cout<<"updated m="<<n<<endl;

// modulus: find and return the remainder of a divison 
cout<<"Modulus,Remainder="<<n%m<<endl;
cout<<"n="<<n<<endl;
n %=m; //n=n%m
cout<<"n="<<n<<endl;

cout<< "\n===example 2:comparison operators=="<<endl;
cout<<"n= "<<n<<endl;
cout<<"m="<<m<<endl;
cout<<"Are n and m equal? "<<(n==m)<<endl;
cout<<"Is n not equal to m? "<<(n !=m)<<endl;
cout<<"Is m greater than n? "<<(m>=n)<<endl;

cout<< "\n===example 3:logical/boolean operators=="<<endl;
//AND operator ,&& return a TRUE only if ALL statements are true
//OR operator, || return a TRUE if ANY of the statements are true
//NOT or inverter operator, ! returns a TRUE for a false, or flase for a true 
bool check1=m<n;
bool check2=n<m;
bool check3 =m!=n;
cout<<"check1="<<check1<<endl;
cout<<"check2="<<check2<<endl;
cout<<"check3="<<check3<<endl;

bool result1=check1 && check2 && check3; //false && true=&&true=
bool result2=check1 || check2 || check3;//
bool result3=!check2;
cout<<"result1="<<result1<<endl;
cout<<"result2="<<result2<<endl;
cout<<"result3="<<result3<<endl;
}