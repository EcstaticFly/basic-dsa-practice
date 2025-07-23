//To find all prime numbers below a give no.:

#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    int n;
    cin>>n;

    int c=0;
    vector<bool> prime(n+1,true); //intially,consider everything below n as prime.
    prime[0]=prime[1]=false; //except for 0 & 1 obviously.

    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){ //'i' ke table mein aaene wale baaki saare numbers ko not-prime kr do(samjho easy hai).
                prime[j]=false; //i*i se start kiya samjho..pattern dekh kr 2,3,5 etc..ke liye.(na samjh pao to striver video check)
            }
        }
    }
    for(auto m:prime){ //counts all prime numbers.
        if(m==true) c++;
    }
     cout<<c<<endl;
    //Check if a number is prime or not directly:
    //By creating a 1000000 size sieve. 
    //and then for any number<=1000000,
    //if(prime[no.]==true, ans:isPrime)
   
}