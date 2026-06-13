/*
Matthew Deoraj 
June 12, 2026
Lab 12: nested loops
*/

#include <iostream>
using namespace std;

int main() {
cout<<"\n-------example 1: nested while loop----"<<endl;
// one run of the outer loop will have one complete cycle of the inner loop
int i = 0;
while(i++ < 3){ //will run not including three.
    cout<<"OUTER LOOP = " <<i<<endl;
    //inner loop, print from 1 to 5
    cout<<"\t\t INNER loop"<<endl;
    int j =0;
    while(j++< 5) {
    cout<<"\t"<<j;
    }
    cout << endl;
}
cout<<"\n-------example 2: nested for loop----"<<endl;
//cinema seats arragment
// row and seats per row (coloum)
int row=0;
int seats=0;
cout<<"Enter the number of rows: ";
cin>>row;
cout<<"Enter the number of seats per row: ";
cin>>seats;

for (int r= 1; r <= row; r++) {
for(int c = 1; c <= seats; c++){
cout<<" Row "<<r<<" seats "<<c<<"\t";
}
cout<<endl;
}

cout<<"\n-------example 3: graphing using nested loops----"<<endl;
const int GRAPHSIZE = 9;
for (int row = 1; row<=GRAPHSIZE; row++){
for (int col =1; col <= GRAPHSIZE; col++){
if(col == 5 || row==5)
cout<<" x ";
else 
cout <<".";
}
cout<<endl;
}

cout<<"\n-------example 4: graphing H using nested loops----"<<endl;
int dimesion =10;
for (int row=1; row<=dimesion;row++){
    for(int col =1; col<=dimesion; col++){
    if ((row>=3 && row<=8 && col>=3 && col<=4))
    cout<<" % ";
    else
    cout<< " . ";
}
cout<<endl;
}

cout<<"\n-------exercise A----"<<endl;

const int GUESS = 5;
int userGuess = 0;

cout << "Guess a number between 1 and 10: ";
cin >> userGuess;

cout<<"\n-------exercise B----"<<endl;

int dimension = 10;

for (int row = 1; row <= dimension; row++) {
    for (int col = 1; col <= dimension; col++) {

        if ((row >= 3 && row <= 8 && col >= 3 && col <= 4) ||
            (row >= 3 && row <= 8 && col >= 7 && col <= 8) ||
            (row >= 7 && row <= 8 && col >= 5 && col <= 6) ||
            (row >= 9 && row <= 10 && col >= 5 && col <= 6)) {
            
            cout << " % ";
        }
        else {
            cout << " . ";
        }
    }

    cout << endl;
}
    return 0;
}