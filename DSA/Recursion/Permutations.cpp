//Give all permutations of an array/string.
// n-char/int means (n!) permutations.

#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;

void solve(vector<int> v,int idx,vector<vector<int>>& ans){
    if(idx>=v.size()){
        ans.push_back(v);
        return;
    }

    for(int j=idx;j<v.size();j++){
        swap(v[idx],v[j]);
        solve(v,idx+1,ans);
        swap(v[idx],v[j]); //backTracking
    }
}

int main(){
    vector<int> v={1,2,3,4,5,6};
    vector<vector<int>> ans;
    int idx=0;
    solve(v,idx,ans);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}