#include <iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;

void rev(string& s,int i){
    if(i==s.size()/2) return;
    swap(s[i++],s[s.size()-1-i]);
    return rev(s,i);
}

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	// your code goes here
	string s;
    cin>>s;
    rev(s,0);
    cout<<s<<endl;

}
