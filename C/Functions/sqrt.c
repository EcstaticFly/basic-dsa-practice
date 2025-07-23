#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter base: ");
    scanf("%d",&a);
    // printf("Enter power: ");
    // scanf("%d",&b);
    // int power=pow(a,b);
    // printf("%d raised to power %d is %d",a,b,power);
    float root=sqrt(a);
    printf("Square root of %d is %f",a,root);
    return 0;
}