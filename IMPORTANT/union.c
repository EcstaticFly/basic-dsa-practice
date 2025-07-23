#include<stdio.h>
#include<string.h>
typedef union pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[20];
} pokemon;
//Union mein ek time pr hum sirf ek hi member use hota hai.
//jo member last mein intialize hua vahi access hoga.
int main(){
    pokemon pikachu;
    pikachu.hp=40;
    pikachu.attack=39;
    pikachu.speed=100;
    pikachu.tier='A';
    printf("%d\n%d\n%d\n%c\n",pikachu.hp,pikachu.attack,pikachu.speed,pikachu.tier);
    //Tier last member hai so vo sahi aaega.Baaki saare %d mein 'A' ki ASCII value print ho jaegi.
    //Kyuki 'A' %d value de skta hai in %d format.
    //but if say last member name hota, so name to sahi aata,but baaki %d mein garbage value chali jaati,kyuki name(eg. raichu) ki koi ASCII value nahi hoti.
    //And, %c mein name ka pehla character chala jata.
    return 0;
}


//So, maan lo pokemon ek structure hota,tb vo memory mein 
//4+4+4+1+15 = 28 bytes leta(int hp+attack+speed +char tier+name[15]),
//But, union ke case mein vo LARGEST MEMBER SIZE HI OCCUPY KRTA HAI. means union = 15 bytes hi occupy krega.
//And,inhi 15(max) bytes se vo koi bhi aur member(last mein jo intialize hua basically) access kr skta hai.
//Thus, vo ek 15 byte ka dabba bna dega,firstly 4 byte ka hp(=40) store ho jagea usme,then jb next intializion krnge,like attack,tb vo hp ko OVERWRITE kr dega and uski jagah 39 store kr dega(in 4 byte),similarly agle intializtion pr 39 kaat kr uski jagah speed(=100) aa jaega(4 byte) and in last intialization, 100 ko kaat kr 'A' aa jaega(in 1 byte).So,finally pikachu vale dibbe mein 'A'(last intilaization) store ho jaega.