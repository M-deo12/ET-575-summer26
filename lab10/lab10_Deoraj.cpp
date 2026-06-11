/*
Matthew Deoraj
june 9, 2026
lab 10:  loop mechanics
*/

#include <iostream>

using namespace std;

int main(){
    cout<<"\n ---- example 1: for loop as counter"<<endl;
    /*
    for loop has three main statement for(initial action; boolean expression; update action)
    */
    // use a for loop to print Hello 5 times
    int x = 3;
    for(int x = 1; x <=5 ; x++){
        cout<<"Hello "<<x<<endl;
    }
    cout<<"End of for loop. Value of x = "<<x<<endl;

    cout<<"\n ---- example 2: for loop as a counter with different steps"<<endl;
    // print from 1 to 10 step 2
    for(int x = 1; x<=10 ; x+=2){
        cout<<x<<"\t";
    }

    cout<<"\n ---- example 3: for loop as a decrement counter with different steps"<<endl;
    // print from 10 to -10 step 3 --> 10 7 4 1 -2 -5 -8
    for(int x = 10; x >= -10; x-=3 ){
        cout<<x<<"\t";
    }
    cout<<endl;

    cout<<"\n ---- example 4: for loop with conditional statement"<<endl;
    // count the numbers that are multiplied of 5 between -20 and 20 step 4
    int counter = 0;
    int sumpositive = 0;
   
    for(int x = -20; x<= 20 ; x += 4){
        cout<<x<<"\t";
        if(x%5==0 && x != 0) counter++;
        if(x>0) sumpositive += x;
    }
    cout<<endl<<"numbers that are multiplied of 5 = "<<counter<<endl;
    cout<<"sum of all positive numbers = "<<sumpositive<<endl;

    cout<<"\n ---- example 5: while loop as a counter"<<endl;
    // while loop to print from 1 to 5, inclusive
    int n = 1;
    while(n<=5){
        cout<<n<<"\t";
        n++;
    }

    cout<<endl;

    n = 1;
    while(n++ <=5){
        cout<<n<<"\t";
    }

    cout<<endl;
    n = 1;
    while(++n <=5){
        cout<<n<<"\t";
    }

    cout<<"\n ---- example 6: while loop to validate an input"<<endl;
    // while loop to recollect a number
    // accept numbers between 1 and 9
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;

    // while loop to recollect a number that is not between 1 and 9
    while(!(number>=1 && number<=9)){
        cout<<"Enter a new number between 1 and 9 ";
        cin>>number;
    }
    cout<<"Collected number = "<<number<<endl;

    cout<<"\n-------EXERCISE 1------"<<endl;
    // decrement from 21 down to -21 by 5
    // count and display how many loop values are multiples of 2
    int multipleOfTwoCounter = 0;
    for(int x = 21; x >= -21; x -= 5){
        cout<<x<<"\t";
        if(x%2==0){
            multipleOfTwoCounter++;
        }
    }
    cout<<endl<<"numbers that are multiples of 2 = "<<multipleOfTwoCounter<<endl;

    cout<<"\n-------EXERCISE 2------"<<endl;
    // ask the user where to start, then count up to 30 by 4
    int startNumber = 0;
    cout<<"Enter a starting number: ";
    cin>>startNumber;

    for(int x = startNumber; x <= 30; x += 4){
        cout<<x<<"\t";
    }
    cout<<endl;

    return 0;
}