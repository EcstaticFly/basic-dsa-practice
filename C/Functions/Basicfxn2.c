#include<stdio.h>
void Ukraine(){
    printf("Get a Ukranian.\n"); //10
    printf("Bang Bang.\n"); //11
    printf("Return to India."); //12
    return; //13
}
void Thailand(){
    printf("Get a Bangkok massage.\n"); //7
    printf("Chill.\n"); //8
    Ukraine(); //Calling Ukraine. //9
    return; //14
}
void Russia(){
    printf("Get a Russian.\n"); //4
    printf("Bang Bang.\n"); //5
    Thailand(); //Calling Thailand. //6
    return; //15
}
void India(){
    printf("Get outta India.\n"); //2
    Russia(); //Calling Russia. //3
    return; //16
}
int main(){
    India(); //calling India. //1 step(1)
    return 0; //17
}