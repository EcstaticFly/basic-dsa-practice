#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[50];
    } pokemon;

    //if typedef not used then->struct pokemon arr[3]
    pokemon arr[3]; //an array of pokemon datatype.
    arr[0].attack=69;
    arr[0].hp=30;
    arr[0].speed=90;
    arr[0].tier='B';
    strcpy(arr[0].name,"Onix");

    arr[1].attack=20;
    arr[1].hp=60;
    arr[1].speed=70;
    arr[1].tier='C';
    strcpy(arr[1].name,"Piege");

    arr[2].attack=89;
    arr[2].hp=90;
    arr[2].speed=99;
    arr[2].tier='S';
    strcpy(arr[2].name,"Dragonite");

    for(int i=0;i<=2;i++){
        printf("%s %d %d %d %c",arr[i].name,arr[i].attack,arr[i].hp,arr[i].speed,arr[i].tier);
        printf("\n");
    }

    return 0;
}