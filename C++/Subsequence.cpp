#include <bits/stdc++.h>
using namespace std;
//Compare two strings,if one string is a subsequence of other or not..order in which letters appear cannot be changed.Eg: "Om" is NOT a subsequence of "Manto" as order of appearence of O and M is different in Om and Manto.
//"Om" is a subsequence of "Abolishment" as O appear first then M appears in both Om and Abolishment.

int compare(string a,string b){
	int i=0,j=0;
	while(a[i]!='\0' && b[j]!='\0'){
		if(a[i]==b[j]){
			i++;
		}
		j++;
	}
	if(i==a.length()) return 1;
	else return 0;
}
int main() {
    ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
	    string m,w;
		cin>>m>>w;
		int p=compare(m,w);
		if(p==1) cout<<"YES"<<endl;
		else{
			int q=compare(w,m);
			if(q==1) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}

	}
}