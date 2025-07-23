#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    // int temp=a; 
    // a=b;
    // b=temp;
    
    a=a^b;
    b=a^b;
    a=a^b;
    printf("Value of a=%d\nValue of b=%d",a,b);
    return 0;
}