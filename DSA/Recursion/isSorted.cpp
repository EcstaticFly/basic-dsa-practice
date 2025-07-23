#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;

void checksort(int *arr,int n){
    if(n<=1){
        cout<<"Sorted"<<endl;
        return;
    }
    if(arr[0]>arr[1]){
        cout<<"NOT Sorted"<<endl;
        return;
    }
    return checksort(arr+1,n-1);
}

bool search(int *arr,int element,int n){
    if(n==0) return false;
    if(arr[0]==element) return true;
    return search(arr+1,element,n-1);

}

int sum(int *arr,int n){
    if(n<=1) return arr[0];
    arr[1]=arr[1]+arr[0];
    return sum(arr+1,n-1);
}

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	// your code goes here
    int n=1;
	int arr[n]={7};

    int element=7;
	
    checksort(arr,n);
    cout<<search(arr,element,n)<<endl;
    cout<<sum(arr,n)<<endl; //note:since,you're passing array by ref. So,sum krne ke baad array lost ho jaegi,tumhare method se(although Efficient method hai)
    

}
