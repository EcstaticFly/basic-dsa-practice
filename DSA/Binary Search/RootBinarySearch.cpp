#include <bits/stdc++.h>
using namespace std;
long binarySearch(int n){
	long start=0;
	long end=n;
	long ans=-1;
	while(start<=end){
		long mid=start+(end-start)/2;
		if(mid*mid==n) return mid;
		else if(mid*mid<n){
			ans=mid;
			start=mid+1;
		}
		else end=mid-1;
	}
	return ans;
}

float decimal(int n,float q,float s,float e,float w){
	float start=s;
	float end=e;
	float ans;
	while(start<=end){
		if((q+s)*(q+s)==n) return (q+s);
		else if((q+s)*(q+s)<n){
			ans=(q+s);
			s=s+w;
		}
		else{
			return ans;
		}
	}
	return ans;

}

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	// your code goes here
	//sqrt of integer:
	int n;
	cin>>n;
	long p=binarySearch(n); //integer part of square root;

	//decimal part:
	float s=0.0,e=0.9,w=0.1;
	float q=p*(1.0);
	//Pass it to fxn as many times as you want the precision to be.
	for(int i=1;i<=4;i++){
		q=decimal(n,q,s,e,w);
		s=s/10,e=e/10,w=w/10;
	}
	cout<<fixed<<setprecision(4)<<q<<endl;


}
