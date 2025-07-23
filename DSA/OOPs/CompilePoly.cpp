#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    //fxn Overload: fxns with same name
    //Overload: Multiple fxns with same name.
    //fxns can have same name..if parameters are diff.
    //But even if return type is diff. fxns can't have same name.
    void greet(){
        cout<<"Hello Suyash Pandey"<<endl;
    }
    int greet(int temp){
        cout<<"Hello Suyash Pandey haha"<<endl;
        return 1;
    }
    void greet(string name){
        cout<<"Hello "<<name<<endl;
    }
};

class B{
    public:
    //Operator Overload: An operator with multiple uses.
    public:
    int x;
    int y;

    public:
    int add(){
        return x+y;
    }

    //Syntax for operator overload:
    void operator+ (B &temp){
        int p=this->x;
        int q=temp.x;
        cout<<"output: "<<q-p<<endl;
    }
    void operator() (){
        cout<<"Hello World!"<<endl;
    }
};


int main(){
    //fxn overload:
    // A obj;
    // obj.greet();
    // obj.greet("yodha");
    // obj.greet(8);


    //Operator Overload:
    B obj;
    obj.x=4;
    obj.y=7;
    cout<<obj.add()<<endl;

    B obj2;
    obj2.x=99;
    obj+obj2; //o/p= 99-4 //obj acts as 'this' while obj2 acts as temp.

    obj();
    obj2();

}