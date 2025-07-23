#include<stdio.h>
#include<string.h>
int main(){
    struct pokemon{ //user defined datatype
        int hp;
        int speed;
        int attack;
        char name[50];
        char tier; //G(God),S,A,B,C,D
    } pikachu,charizard,mewtwo;

    pikachu.speed=90;
    printf("Enter pikachu attack: ");
    scanf("%d",&pikachu.attack);
    pikachu.hp=60;
    printf("Enter nickname: ");
    scanf("%s",&pikachu.name);
    pikachu.tier='A';

    printf("%s\n",pikachu.name);
    printf("%d\n",pikachu.attack);
    printf("%c",pikachu.tier);


    charizard.attack=150;
    charizard.hp=95;
    charizard.speed=80;
    charizard.tier='S';
    

    mewtwo.attack=250;
    mewtwo.speed=249;
    mewtwo.hp=200;
    mewtwo.tier='G';


    //another way of intialising a structure variable:
    struct pokemon Lugia={20,30,100,"God pokemon Lugia",'G'};
    //remember to fill in the order in which the structure is made. 


    // Lugia.hp=20;
    // Lugia.speed=30;
    // Lugia.attack=100;
    // strcpy(Lugia.name,"Lugia");
    // Lugia.tier='G';
    printf("%d\n%s\n%c",Lugia.attack,Lugia.name,Lugia.tier);

    return 0;
}