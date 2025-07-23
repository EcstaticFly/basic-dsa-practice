#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p=abs(n);
    int ans=0,i=0;
    while(p!=0){
        int bit=(p&1);
        ans=(bit*pow(10,i))+ans;
        p= p>>1;
        i++;
    }
    if(n<0) cout<<"-"<<ans<<endl;
    else cout<<ans<<endl;
    
}
