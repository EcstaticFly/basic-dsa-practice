#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;

int getsum(int *arr,int n){
	int s=0;
	for(int i=0;i<n;i++) s+=arr[i];
	return s;
}

void update(int*p){
    p=p+1;
    return ;
}
int main() {
	int arr[6]={5,7,3,8,6,0};
	cout<<getsum(arr+3,3); //output 14

    int temp=5;
    int *p=&temp;
    cout<<p<<endl;
    // cout<<&p<<endl;
    update(p);
    cout<<p<<endl;
    // cout<<&p<<endl;

}