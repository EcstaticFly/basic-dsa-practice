#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    for(auto m: l){
        cout<<m<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase:"<<endl;
    for(auto m: l){
        cout<<m<<" ";
    }
    cout<<endl;
    cout<<"Size: "<<l.size()<<endl;

    list<int> n(l); //copy list l in new list n
    for(auto m: n){
        cout<<m<<" ";
    }

    list<int> b(5,100);
    for(auto m: b){
        cout<<m<<" ";
    }

}