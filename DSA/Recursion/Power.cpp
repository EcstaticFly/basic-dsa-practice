#include <iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;

int power(int base,int deg){
    if(deg==0) return 1;

    int m=power(base,deg/2);
    if((deg&1)==0) return m*m;
    else return m*m*base;
}

int main(){
    cout<<power(3,10);
}