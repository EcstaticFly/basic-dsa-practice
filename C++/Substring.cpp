#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	// your code goes here
	string s;
    cin>>s;
    
    int ans = 0;
    vector<int> count(128);

    for (int l = 0, r = 0; r < s.length(); ++r) {
      ++count[s[r]];
      while (count[s[r]] > 1)
        --count[s[l++]];
      ans = max(ans, r - l + 1);
    }
    cout<<"Longest Substring Without Repeating Characters: "<<ans<<endl;
}
