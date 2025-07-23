#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);

    s.insert(3);
    s.insert(3);

    s.insert(6);
    s.insert(6); //T.C: O(logn)
    s.insert(6);

    s.insert(32);

    s.insert(1);
    for(auto m: s){
        cout<<m<<" ";
    }
    set<int>:: iterator it=s.begin();
    it++;
    cout<<endl;
    s.erase(it); //T.C: O(logn)
    for(auto m: s){
        cout<<m<<" ";
    }
    cout<<endl;
    cout<<"5 is present or not?: "<<s.count(5)<<endl; //T.C: O(logn)

    set<int>::iterator itr=s.find(6); //T.C: O(logn)
    for(auto i=itr;i!=s.end();i++){
        cout<<*i<<" ";
    }



}