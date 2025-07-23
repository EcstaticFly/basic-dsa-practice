#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    string name;
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class male: public Human{
};

class female:public Human{
};

int main(){
    male m;
    female f;
    m.speak();
    f.speak();

}