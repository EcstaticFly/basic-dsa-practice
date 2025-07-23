#include <bits/stdc++.h>
#include "temp.cpp"
using namespace std;

class Hero{
    //properties:
    private: //private ke neeche jitne elements hai unhe sirf class ke andar hi access kr skte hai.
    char level;
    public: //public ke neeche jitne elements hai,unhe kahin bhi access kr skte hai.
    int health;
    char *name;
    static int timeToComplete; //data members created with static keyword DON'T need an object to access them.

    // Constructor:
    Hero(){
        cout<<"Constructor called"<<endl;
        name=new char[100];
    }



    void print(){
        cout<<level<<endl;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;
    }

    //Static fxn: (Can only access static member)
    static int random(){
        return timeToComplete;
    }


    //Destructor:
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};

int Hero::timeToComplete=5; //Intialisation for static data member.


int main() {
    // Hero a; //For static objects, destructor called automatically.
    // Hero* b=new Hero;
    // delete b; //For dynamic bject, destructor called manually.

    cout<<Hero::timeToComplete<<endl; //Accessing static data member(no object needed)
    cout<<Hero::random()<<endl;







}
