#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    s.push("Vinod");
    s.push("Kumar");
    s.push("Pandey");

    cout<<"First Element: "<<s.top()<<endl; //last IN, first OUT.
    s.pop();
    cout<<"First Element: "<<s.top()<<endl;
    cout<<"Size: "<<s.size()<<endl;
    cout<<"Empty Or Not(boolean): "<<s.empty()<<endl;
}