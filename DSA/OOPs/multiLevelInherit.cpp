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
class Bulldog: public Dog{
};

int main(){
    Dog d;
    d.speak();

    Bulldog c;
    c.speak();

}