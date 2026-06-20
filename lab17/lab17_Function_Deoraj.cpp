/*
Matthew Deoraj
june 19,2026
Lab 17:array application
*/

#include <iostream>
using namespace std;

//example 1
void filluparray( int *arr, int &numberuserindex, int sizearray) {
int number, index =0;
do {
cout<<"Enter a positive number";
cin>>number;
if (number>0) {
arr[index]=number;
index++;
}

}while(number>0 && sizearray);
numberuserindex = index;
}

void printelements(int*arr,int numberuserindex){
for (int i=0; i<numberuserindex;i++){
cout<<arr[i]<<"\t";
}
cout<<endl;

}

int search(int *arr, int &numberuserindex, int targetnumber){
    int index=0;
    bool found =false;
    while(!found&&(index<numberuserindex)){
if(targetnumber ==arr[index])
found =true;
else
index++;
}
if(found)
return index;
else
return -1;

//example 3:2d array
void intro2darray(){
    int graylevel[255][10];

    int tempature [2][5] ={
        {78,56,60},
        {100,89,92,90,80}
 }
};
cout<<"The Tempature in 1st row, 2nd colum"<<tempature[0][1]<<endl;

}