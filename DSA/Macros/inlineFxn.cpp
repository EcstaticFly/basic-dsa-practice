#include<iostream>
#include<iomanip> //To use setprecision.
#include<ios>
#include<algorithm>
#include<numeric>
#include<string>
#include<vector>
using namespace std;


inline int getMax(int &a,int&b){
    return (a>b)?a:b;
}

int main(){
    int a=10,b=6,ans;
    ans=getMax(a,b);
    cout<<ans<<endl;
    a++;
    b+=20;
    ans=getMax(a,b);
    cout<<ans<<endl;

}