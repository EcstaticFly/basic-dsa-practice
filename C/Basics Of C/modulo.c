#include <stdio.h>
int main(){
    int a,b;
    printf("Enter a: "); //a>b
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Remainder when %d is divided by %d = %d", a,b, a%b);
    return 0;
}