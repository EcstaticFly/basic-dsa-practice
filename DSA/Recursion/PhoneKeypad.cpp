#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;

void solve(string s,string output,int idx,vector<string>& ans,string m[]){
    if(idx>=s.size()){
        ans.push_back(output);
        return;
    }

    int digit=s[idx]-'0';
    string value;
    value=m[digit];

    for(int i=0;i<value.size();i++){
        output.push_back(value[i]);
        solve(s,output,idx+1,ans,m);
        output.pop_back();
    }

}

int main(){
    string s;
    cin>>s; //0<=s.length()<=4

    vector<string> ans;
    string output;
    int idx=0;
    string m[10]={"", "", "abc", "def", "ghi", "jkl","mno","pqrs","tuv","wxyz"};
    solve(s,output,idx,ans,m);

    for(auto i: ans) cout<<i<<" ";
}