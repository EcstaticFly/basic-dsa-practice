#include<stdio.h>
#include<string.h>
typedef struct person{
    int age;
    float weight;
}person;
void change(person* m){
    (*m).age=81;
    m->weight=70.45;
    return;
}
int main(){
    person a;
    a.age=23;
    a.weight=60.23;
    person* x=&a;
    // printf("%d %f\n",x->age,x->weight);

    //VVI=>
    // (*x).age=50;  //bracket important
    // x->weight=55.41; //Two ways of writing the value change through pointer.
    // x->age=11; (Preffered way)
    // printf("%d %f",x->age,x->weight);


    printf("%d %f\n",a.age,a.weight);
    change(x); //change(&a) will also work.
    printf("%d %f\n",a.age,a.weight);
    return 0;
}