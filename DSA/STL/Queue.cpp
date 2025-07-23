#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("Vinod");
    q.push("Kumar");
    q.push("Pandey");
    
    cout<<"Size: "<<q.size()<<endl;
    cout<<"First Element: "<<q.front()<<endl;
    q.pop();
    cout<<"After Pop Size: "<<q.size()<<endl;
    cout<<"First Element: "<<q.front()<<endl;
    
    cout<<"Empty or not(boolean): "<<q.empty()<<endl;
}