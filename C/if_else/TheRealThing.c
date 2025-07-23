#include <stdio.h>
int main(){
    int a;
    if(3+2%5){ //heirarchy 2%5=2 and 2+3=5 which is not equal to zero. so, code works.
        printf("This works.\n");
    }
    if(a=10){
        printf("Even this works.\n");
    }
    if(-6){
        printf("Suprisingly even this works.\n");
    }
    if('%'){ //any character a to z,A to Z,$,%,#,!,@ etc can be filled.
    printf("YO!");
    } 
    return 0;
}
//so basically,if(as long as any character except 0(false)is written here,){
   // code in {} will work,like printf or something.}
   // it doesn't happen in JAVA.
   //thus, it is not, if(condition){code;}
   //IT IS, if(EXPRESSION){code;}