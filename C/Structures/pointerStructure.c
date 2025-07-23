#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[50];
} pokemon;
int main(){
    pokemon a,b;
    a.hp=20;
    a.attack=30;
    a.speed=30;
    a.tier='S';
    strcpy(a.name,"pikachu");
    pokemon* x=&a;
    printf("%p\n%p\n%p\n%p\n%p\n%p",&a.hp,&a.attack,&a.speed,&a.tier,&a.name,x);
    //VVI->The address of the pokemon variable (a),stored in *x,is same as the address of its first element i.e. a.hp.
    return 0;
}