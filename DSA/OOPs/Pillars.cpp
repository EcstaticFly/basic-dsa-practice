#include <bits/stdc++.h>
using namespace std;

//Encapsulation:(yahi hai bhai, normal class bnana)
class Student{
    private:
        
        int age;
        int height;
    public:
    string name;
        int getAge(){
            return this->age;
        }
        int getHeight(){
            return this->height;
        }
        string getName(){
            return this->name;
        }

};

//Inheritence:
class Human{
    private:
    char BloodGroup;
    public:
    int height;
    int age;
    int weight;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }

};

//Syntax for a class to inherit another class:
class male: private Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
    // int getH(){
    //     return this->height;
    // }
};


int main() {
    // Student a;
    // a.name="Suyash";
    // cout<<a.getName();

    //Inheritence:
    male person1; //since male inherits from human.So, male has age, height, weight and fxns.
    cout<<person1.age<<endl;
    cout<<person1.height<<endl;
    cout<<person1.weight<<endl;
    cout<<person1.color<<endl;
    person1.sleep();
    person1.age=5;
    person1.setWeight(26);
    cout<<person1.getAge()<<endl;
    cout<<person1.weight<<endl;
    // cout<<person1.BloodGroup<<endl;
    //Note: BloodGroup is private in human.So, is not inherited and therfore can access it from person1.

}
