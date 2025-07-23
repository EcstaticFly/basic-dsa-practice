//Find primes b/w L-to-R (1<=L,r<=10^12) && (R-L<=10^6).

#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;

int n=1000000;
vector<bool> sieve(n+1,true);

void createSieve(){
    sieve[0]=sieve[1]=false;
    for(int i=2;i*i<=n;i++){
        if(sieve[i]==true){
            for(int j=i*i;j<=n;j+=i){
                sieve[j]=false;
            }
        }
    }
    return;

}

vector<int> generatePrime(int k){
    vector<int> v;
    for(int i=2;i<=k;i++){
        if(sieve[i]==true) v.push_back(i);
    }
    return v;
}

int main(){
    int t;
    cin>>t;
    createSieve();
    while(t--){
        long long l,r;
        cin>>l>>r;
        
        //1) Generate primes till sqrt(r).
        vector<int> prime=generatePrime(sqrt(r));

        //2)Create a dummy array of size (r-l+1) ans mark all true.
        vector<bool> dummy(r-l+1,true);

        //3)Mark all multiples of primes in dummy as false.
        for(auto pr: prime){
            long long firstMultiple=(l/pr)*pr;
            if(firstMultiple<l) firstMultiple+=pr;
            long long s;
            if(firstMultiple>pr*pr) s=firstMultiple;
            else s=pr*pr;

            for(long long j=s;j<=r;j+=pr){
                dummy[j-l]=false;
            }
        }

        //4)All remaining as true wiil be primes in range L-to-R.
        int c=0;
        for(long long i=l;i<=r;i++){
            if(dummy[i-l]==true){
                c++; //you can also store them
            }
        }

        //if l starts from 0 or 1..to yeh 0,1 ko bhi prime count kr le rha tha.
        if(l==1) c--;
        if(l==0){
            if(r>=1) c-=2;
            else c--;
        }
        cout<<c<<endl; //Count of primes bw L & R.

    }
}