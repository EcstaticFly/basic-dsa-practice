#include <stdio.h>
int main(){
    int a,b;
    printf("Enter first number(base): ");
    scanf("%d",&a);
    printf("Enter second number(the degree): ");
    scanf("%d",&b);

    // int c=a;
    // int i=1;
    // while(i<b){
    //     a=a*c;
    //     i++;
    // }
    // printf("The value of %d raised to power of %d is %d.",c,b,a);


    int power=1;
    for(int i=1;i<=b;i++){
        power=power*a;
    }
    printf("The value of %d raised to power of %d is %d.",a,b,power);

    // int power=1;
    // for(int i=1;i<=b;i++){
    //     power=power*a;
    //     printf("The value of %d raised to power of %d is %d.\n",a,i,power);
    // }
    return 0;
}