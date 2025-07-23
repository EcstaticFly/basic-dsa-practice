#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char name[20];
        char tier;
    } pokemon;
    pokemon a,b,c;
    a.attack=100;
    a.hp=30;
    a.speed=50;
    a.tier='S';
    strcpy(a.name,"Mew");


    b=a; // b mein a ki values aa gyi.
    //deep copy, means changing b will NOT change a.

    strcpy(b.name,"Venusaur"); //aise hi bas naam badal rhe,baaki stats same hai.


    printf("%s %d\n",a.name,a.hp);
    printf("%s %d",b.name,b.hp);


    return 0;
}