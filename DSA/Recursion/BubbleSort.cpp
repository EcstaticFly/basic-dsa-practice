#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;

void bubbleSort(int *arr,int n){
    if(n==0 || n==1) return;

    for(int j=0;j<=n-2;j++){
        if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
    }
    return bubbleSort(arr,n-1);
}

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	// your code goes here
    int n=8;
	int arr[n]={5,6,3,8,4,9,1,0};

    bubbleSort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}
