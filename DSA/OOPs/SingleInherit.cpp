#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    string name;
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal{
};

int main(){
    Dog a;
    a.speak();
}