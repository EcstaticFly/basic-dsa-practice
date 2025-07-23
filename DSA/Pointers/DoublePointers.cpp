//Find primes b/w L-to-R (1<=L,r<=10^12) && (R-L<=10^6).

#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;

void update(int**m){
    // m=m+1;
    //NO change

    *m=*m+1;
    //p ke andar jo address hai vo CHANGE hojaega.

    // **m=**m+1;
    //temp ki value CHANGE ho jaegi.
    return;
}
int main(){
    int temp=5;
    int *p=&temp;
    int* *m=&p;

    cout<<"Before: "<<temp<<endl;
    cout<<"Before: "<<p<<endl;
    cout<<"Before: "<<m<<endl;
    update(m);
    cout<<"After: "<<temp<<endl;
    cout<<"After: "<<p<<endl;
    cout<<"After: "<<m<<endl;

    
}