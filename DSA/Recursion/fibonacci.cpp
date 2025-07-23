#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;

//0,1,1,2,3,5,8,13,21,34,55,89,144,...
int fibo(int n){
    //T.C=O(2^n)
    if(n==1){ //1st term=0
        return 0;
    }
    else if(n==2){ //2nd term=1
        return 1;
    }
    return fibo(n-1)+fibo(n-2); //Baaki recursion sambhal lega

}

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	// your code goes here
	int n; //upto n-terms
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<fibo(i)<<" ";
    }

    //By loop:
    // int a=0,b=1;
    // int temp;
    // for(int i=1;i<=n;i++){
    //     //T.C=O(n)
    //     cout<<a<<" ";
    //     temp=a+b;
    //     b=a;
    //     a=temp;
        
    // }

}
