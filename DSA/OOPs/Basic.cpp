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

    // Constructor:
    Hero(){
        cout<<"Constructor called"<<endl;
        name=new char[100];
    }

    //Copy Constructor: (default copy costructor uses shallow copy i.e. same memory,diff names)
    Hero(Hero& temp){ //Note: We can only pass it by ref.

        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch; //This creates a deep copy(diff. memory).

        this->health=temp.health;
        this->level=temp.level;
        cout<<"Copy Constructor called"<<endl;
        //Pass by ref. bcoz..if we pass by value then a COPY of temp needs to be genereated..and this is the copy constructor...so infinite loop
    }

    //Parameterised constructor:(Create object with parameter too. Eg:- Hero ramesh(parameter);)
    // Hero(int health){
    //     cout<<this<<endl;
    //     this->health=health;  //They are NOT the same health. 'this' is a pointer that stores the address of the current object.
    // } //So, using this->health means the health element of current object=(health in paramater)



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
};

int main() {
    //Creation of object.
    Hero Spiderman; //Constructor is called whenever an object is created(Statically or Dynamically)
    // cout<<sizeof(Spiderman)<<endl;
    // cout<<&Spiderman<<endl;

    
    //intro class from temp.cpp
    // intro student1; 
    // cout<<sizeof(student1)<<endl;


    // Spiderman.health=78;
    // cout<<Spiderman.health<<endl;


    //To access a private element(use getter and setter):
    // Spiderman.setHealth(65); 
    // cout<<Spiderman.getHealth()<<endl; 
    // Spiderman.setLevel('C'); //Setter(modifying private element level)
    // cout<<Spiderman.getLevel()<<endl; //Getter(accessing private element)
    // Spiderman.print();


    //Dynamic Object creation:
    // Hero* b=new Hero;
    // (*b).setHealth(94); //b->setHealth(94) (Other way of writing)
    // cout<<(*b).getHealth()<<" "<<b->getHealth()<<endl;
    // (*b).setLevel('S'); //b->setLevel('S');
    // cout<<(*b).getLevel()<<" "<<b->getLevel()<<endl;
    // (*b).print();
    // b->print();

    Hero superman;
    superman.setHealth(97);
    superman.setLevel('S');

    Hero ramesh(superman); //copies superman stats into ramesh..
    cout<<ramesh.getHealth()<<endl;
    cout<<ramesh.getLevel()<<endl;


    


    
}
