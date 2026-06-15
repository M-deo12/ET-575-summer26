/*Matthew Deoraj 
june 15, 2026
*/

#include <iostream>

using namespace std;

int main () {

cout<<"\n---->For Loop prep problems--->"<<endl;
//write a progrsam that prints numbers from 1 to 5 using for loop

int j=1;
for (j; j<=5; j++) {

cout<<"numbers: " << j<<endl;

}
cout<<"\n ---question 2: ---"<<endl;
// write a program that prints number from 1-10
for(int k=1;  k<=10; k++) {
    cout<<"count="<<k<<endl;
}

cout<<"\n -----> QUestion 3:------  "<<endl;
//write program that increases ffrom 2 to 20
for (int t=2; t<=20;t+=2) {
    cout<<"count : "<<t<<endl;
}

cout<<"\n---->question 4: -----"<<endl;
for (int q =10; q>=1; q--) {
    cout<<"count: "<<q<<endl;
}

cout<<"\n --->Question 5--->"<<endl;
//add the numbers from 1-10
int sum =0;
for ( int z=1 ; z<=10;z++){
    sum =sum + z;
}
cout<<"SUM: "<<sum<<endl;

cout<<"\n---While loop: ----"<<endl;
//write program that prints numbers from 1-5 while loop

int h =1;
while (h<=5) {
    cout<<"Count : "<<h<<endl;
    h++;
}

cout<<"\n ---- Question 2----"<<endl;
//print numbers ffrom 1-10
int a = 1;
while (a<=10){
    cout<<"Count: "<<a<<endl;
    a++;
}

cout<<"\n --- Question 3----"<<endl;
//print numbers from 2 to 20 using while loop
int s =2;
while (s<=20){
    cout<<"Count: "<<s<<endl;
    s+=2;
}

cout<<"\n----Question 4---"<<endl;
//print numbers 10 to 1 using while loop
int dee =10;
while (dee>=1){
    cout<<"Count: " <<dee<<endl;
    dee --;
}

cout<<"\n--break statments--"<<endl;
//write a program that counts numbers 1-10 but stops at 6
for (int ey=1; ey<=10; ey++){
if (ey==6) {
break;
}
cout<<"COunt"<<ey<<endl;
}
    return 0;
}