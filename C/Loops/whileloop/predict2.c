#include <stdio.h>
int main(){
    int x=4,y=3,z;
    z=x-- -y; //since it's post increment.Therefore,x is first used for it's orignal value.i.e. x=4 is used.
    //then,y=3 is used so, z=x-- -y=4-3=1.Then after use, updation of x takes place.so, x--=x-1=4-1=3.
    //final value,x=3,y=3,z=1. 
    printf("%d %d %d",x,y,z);
    return 0;
}