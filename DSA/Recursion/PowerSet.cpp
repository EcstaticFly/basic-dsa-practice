//Give the Power set of a given set.

#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;

void solve(vector<int> v,vector<int> output,int i,vector<vector<int>>& ans){
    if(i>=v.size()){
        ans.push_back(output);
        return;
    }

    //exclude:
    solve(v,output,i+1,ans);

    //include:
    int element=v[i];
    output.push_back(element);
    solve(v,output,i+1,ans);
}

int main(){
    vector<int> v={1,2,3};
    //3 elements. So, Power Set = 2^3 = 8 elements.

    vector<vector<int>> ans;
    vector<int> output;
    int i=0;
    solve(v,output,i,ans);

    for(int i=0;i<ans.size();i++){
        cout<<(i+1)<<") ";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}