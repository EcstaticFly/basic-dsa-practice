#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;
    m[6]="Vinod";
    m[11]="Kumar";
    m[28]="Pandey";

    m.insert({-4,"Advocate"});
    cout<<"before erase:"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    // cout<<"Is 41 present?: "<<m.count(41)<<endl;

    m.erase(11);
    cout<<endl;
    cout<<"After Erase: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    auto it=m.find(6);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<" ";
    }


}