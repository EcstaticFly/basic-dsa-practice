#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	cin.ignore(); //necessary when using getline fxn.
	for(int j=1;j<=t;j++){
	    string s;
	    getline(cin,s);
		int p=0;
		int q=s.length();
		for(int i=0;i<=q-3;i++){
		if(s[i]=='n' && s[i+1]=='o' && s[i+2]=='t'){
			if((i==0 || s[i-1]==' ') && (i==q-3 || s[i+3]==' ')){
			    p=1;
			    break;
			}
		}
	}
		
		if(p==1) cout<<"Real Fancy"<<endl;
		else cout<<"regularly fancy"<<endl;
	}
}
