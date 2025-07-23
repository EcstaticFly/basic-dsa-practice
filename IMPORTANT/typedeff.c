#include<stdio.h>
typedef float realnumber; 
//new name of float in this code->realnumber.
//although,float will still work.
int main(){
    int x;
    realnumber y;
    float z=3.141529;
    scanf("%d%f",&x,&y);
    printf("%d\n%f\n%f\n",x,y,z);

    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
    } pokeball;
    //now we won't have to write struct pokemon pikachu to create pikachu variable of pokemon datatype.We can simply write->
    pokeball pikachu;
    pikachu.hp=89;
    pikachu.speed=37;
    pikachu.tier='A';
    pikachu.attack=39;
    pokeball mewtwo;
    mewtwo.tier='G';
    mewtwo.attack=199;
    mewtwo.speed=198;
    mewtwo.hp=199;

    printf("%d\n%c",pikachu.attack,mewtwo.tier);
    return 0;
}