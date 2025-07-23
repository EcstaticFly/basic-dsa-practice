#include<iostream>
#include<algorithm>
#include<numeric>
#include<string>
#include<vector>
using namespace std;

void update(int &p){ //Pass by reference
    p++;
    return;
}


int main(){
    // int i=12;
    // int &j=i;

    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;

    int p=57;
    cout<<"before: "<<p<<endl;
    update(p);
    cout<<"after: "<<p<<endl;
}