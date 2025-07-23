#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(90); //1,2,3,4,5
    d.push_front(4);
    d.push_front(3);
    d.push_front(2);
    d.push_front(1);
    for(auto m: d){
        cout<<m<<" ";
    }
    cout<<endl;
    // cout<<d.at(1)<<endl;
    // cout<<d[1]<<endl;
    // cout<<d.empty()<<endl;


    cout<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+5);
    cout<<d.size()<<endl;
    for(auto m: d){
        cout<<m<<" ";
    }

    

}