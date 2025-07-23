#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;

int fac(int n){
	if(n==0) return 1;
	return n*fac(n-1);
}
int power(int n){
	if(n==0) return 1;
	int m=power(n/2);
	if(n%2==0) return m*m;
	else return m*m*2;
}
void count(int n){
	if(n==0) return;
	
	count(n-1);
	cout<<n<<" ";
}

vector<string> v={"zero","one","two","three","four","five","six","seven","eight","nine"};

void solve(int n){
	if(n==0) return;
	
	solve(n/10);
	cout<<v[n%10]<<" ";
}
int main() {
    ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	// your code goes here
	int n;
	cin>>n;
	solve(n);

}
