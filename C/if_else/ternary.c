#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    //if we want to write this if-else code in shorter way(less lines),we use ternary operator i.e.
    //expression1 ? expression2 : expression 3;
    a%2==0 ? printf("Even number.") :  printf("Odd number");
    //But use it only for small if-else codes, don't use it for nested if-else or long if-else code.
    //otherwise,it will become too long and complicated
    // if(a%2==0){
    //     printf("Even number.");
    // }
    // else{
    //     printf("Odd number");
    // }
    return 0;
}