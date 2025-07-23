#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int mask=1;
    while(mask<n){
        mask=(mask<<1)+1;
    }
    cout<<(mask^n)<<endl;
}