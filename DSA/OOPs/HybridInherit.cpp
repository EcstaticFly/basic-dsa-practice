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

class B:public Animal{
};
class C:public Animal,public Sound{
};

int main(){

}