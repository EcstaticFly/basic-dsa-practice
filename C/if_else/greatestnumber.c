#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    printf("Enter fourth number: ");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("%d is the greatest number among the four.",a);
    }
    if(b>a && b>c && b>d){
        printf("%d is the greatest number among the four.",b);
    }
    if(c>a && c>b && c>d){
        printf("%d is the greatest number among the four.",c);
    }
    if(d>a && d>b && d>c){
        printf("%d is the greatest number among the four.",d);
        
    }
    return 0;
}