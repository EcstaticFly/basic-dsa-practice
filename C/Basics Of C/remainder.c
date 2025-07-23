#include <stdio.h>
int main()
{
    int a,b,q;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d",&b);
    q=a/b;
    printf("Remainder when a/b=%d", a-q*b); //divisor*quotient + remainder = Dividend, or we can write a%b and it will give the remainder
    return 0;

}