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

class Sound{
    public:
    void chirp(){
        cout<<"Chirping"<<endl;
    }
};

//Multiple Inheritence:
class Bird: public Animal,public Sound{
};

int main(){
    Bird sparrow;
    sparrow.speak();
    sparrow.chirp();

}