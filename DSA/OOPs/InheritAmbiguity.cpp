#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void fun(){
        cout<<"I am A"<<endl;
    }
};
class B{
    public:
    void fun(){
        cout<<"I am B"<<endl;
    }
};
class C: public A,public B{
};

int main(){
    C obj;
    // obj.fun(); //Since bth fxn ar called fun..So, it will give error.
    //Don't know which fxn is called exactly.
    //So, we use ::
    obj.A::fun();
    obj.B::fun();

}