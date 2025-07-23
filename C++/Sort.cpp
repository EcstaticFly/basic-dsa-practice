#include <bits/stdc++.h>
#include<stdbool.h>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	// your code goes here
	
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
	    int n,m;
		cin>>n>>m;
	    int arr[n*m];
	    for(int i=0;i<=(n*m)-1;i++){
	        cin>>arr[i];
	    }
		sort(arr,arr+n*m); //Sorts array.
	    int sc=0,sg=0;
		for(int i=(n*m)-1;i>=0;i=i-2){
			sc+=arr[i];
		}
		for(int i=(n*m)-2;i>=0;i=i-2){
			sg+=arr[i];
		}
	    if(sc==sg) cout<<"Draw"<<endl;
		else if(sc>sg) cout<<"Cyborg"<<endl;
		else cout<<"Geno"<<endl;
	}
}
