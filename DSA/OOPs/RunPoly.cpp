#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class B: public A{
    public:
    void speak(){
        cout<<"Talking"<<endl;
    }
};


int main(){
    B obj;
    obj.speak(); //fxn in class B overrides fxn of class A. o/p=Talking

}