#include<stdio.h>
#include<string.h>
int main(){
    struct pokemon{ //user defined datatype
        int hp;
        int speed;
        int attack;
        char name[50];
        char tier; //G(God),S,A,B,C,D
    };   //Remember to put ; here.
    struct pokemon pikachu;
    pikachu.speed=90; //(.)=Dot operator
    printf("Enter pikachu attack: ");
    scanf("%d",&pikachu.attack);
    pikachu.hp=60;
    printf("Enter nickname: ");
    scanf("%s",&pikachu.name);
    pikachu.tier='A';

    printf("%s\n",pikachu.name);
    printf("%d\n",pikachu.attack);
    printf("%c",pikachu.tier);

    struct pokemon charizard;
    charizard.attack=150;
    charizard.hp=95;
    charizard.speed=80;
    charizard.tier='S';

    struct pokemon mewtwo;
    mewtwo.attack=250;
    mewtwo.speed=249;
    mewtwo.hp=200;
    mewtwo.tier='G';

    return 0;
}