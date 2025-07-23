#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;

bool binarySearch(int *arr,int element,int s,int e){
    if(s>e) return false;

    int mid=s+(e-s)/2;
    if(arr[mid]==element) return true;
    else if(arr[mid]<element) return binarySearch(arr,element,mid+1,e);
    else return binarySearch(arr,element,s,mid-1);
}

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	// your code goes here
	int n=7;
    int arr[n]={2,4,5,6,8,9,10};
    int element=42;
    cout<<binarySearch(arr,element,n)<<endl;

}
