#include<iostream>
#include<queue>
using namespace std;

int main(){
    //max-heap:
    priority_queue<int> maxi;

    //min-heap:
    priority_queue< int,vector<int>,greater<int> > mini;
    maxi.push(1);
    maxi.push(4);
    maxi.push(3);
    maxi.push(0);
    int p=maxi.size();
    for(int i=0;i<=p-1;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(6);
    mini.push(1);
    mini.push(4);
    mini.push(10);
    mini.push(3);
    mini.push(0);

    int q=mini.size();
    for(int i=0;i<=q-1;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }




}