/*
Matthew Deoraj 
june 19, 2026
lab 17:array application
*/
#include <iostream>
using namespace std;

int main() {
const int sizea =10;
int a[sizea]={0};
int listsize;
int targetnumber=10;

filluparray(a,listsize,sizea);
printelements(a,listsize);
int foundindex=search(a,listsize,targetnumber);
cout<<"index of found number: "<<foundindex<<endl;

intro2darray();

    return 0;
}