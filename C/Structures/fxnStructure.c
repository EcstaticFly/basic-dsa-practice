#include<stdio.h>
#include<string.h>
typedef struct pokemon{ //Global Declaration
        int attack;
        int speed;
        int hp;
        char name[50];
        char tier;
    }pokemon;

void fun(pokemon x){
    printf("%d",x.hp);
    return;
}
void change(pokemon x){
    x.hp=50;
    x.attack=50;
    x.speed=50;
    return;
}
int main(){
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.attack=90;
    pikachu.speed=80;
    // fun(pikachu);
    change(pikachu);
    printf("%d\n%d\n%d\n",pikachu.hp,pikachu.attack,pikachu.speed);
    //V.V.I=>Pass by value here(copy passes,so changing it won't change orignal value)
    return 0;
}