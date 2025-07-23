#include<iostream>
#include<iomanip> //To use setprecision.
#include<ios>
#include<algorithm>
#include<numeric>
#include<string>
#include<vector>
using namespace std;


void print(int arr[],int n,int start=0){ //start now has a "default" value,so it is a default arg.
    for(int i=start;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return;
}

int main(){
    int arr[5]={1,4,7,8,9};
    print(arr,5); //no start value passed,so start takes the default value.
    print(arr,5,2); //now start=2 is passed,so start will take 2 as its value.
    

}