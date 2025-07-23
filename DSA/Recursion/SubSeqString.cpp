//Give the Power set of a given set.

#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;

void solve(string str,string s,int i,vector<string>& ans){
	if(i>=str.size()){
		ans.push_back(s);
		return;
	}

	solve(str,s,i+1,ans); //exclude

	s.push_back(str[i]); //include
	solve(str,s,i+1,ans);
}

int main(){
    string str="abc";
    //3 elements.So, Power Set(excluding null string(""),as it's not a subSeq.) = (2^3)-1 = 7 elements.

    vector<string> ans;
	int i=0;
	string s;
	solve(str,s,i,ans);
    ans.erase(ans.begin());

    for(auto m:ans){
        cout<<m<<" ";
    }
}