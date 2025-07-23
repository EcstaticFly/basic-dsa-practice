#include<iostream>
#include<iomanip> //To use setprecision.
#include<ios>
#include<algorithm>
#include<numeric>
#include<string>
#include<vector>
using namespace std;


#define AREA(r) (pi*r*r) //fxn-like macro
#define pi 3.1416 //object-like macro

#define INSTA FOLLOWERS //chain macros
#define FOLLOWERS 78

#define ELEMENTS 1,\ //multi-line macro
                2,\
                3,\
                4

int main(){
    // int r=7;

    //Object-like MACRO:

    // double area=pi*r*r;
    // cout<<fixed<<setprecision(6)<<area<<endl;

    //Fxn-like MACRO:
    // cout<<AREA(7);


    //CHAIN MACRO:
    // cout<<"She has "<<INSTA<<" insta followers"<<endl;

    //Multi-line MACRO:
    int arr[]={ELEMENTS};
    for(int i=0;i<=3;i++) cout<<arr[i]<<" ";

}