#include<iostream>
#include<vector>
using namespace std;
int main(){;
    vector<int> v;
    for(int i=0;i<=7;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    int p=0;
    for(int i=0;i<=v.size()-2;i++){
        if(v[i]>v[i+1]){
            p=1;
            break;
        }
    }
    if(p==1) cout<<"Not Sorted"<<endl;
    else cout<<"Sorted"<<endl;
}