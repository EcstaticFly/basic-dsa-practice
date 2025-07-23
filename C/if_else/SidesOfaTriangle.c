#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter length of side first: ");
    scanf("%d",&a);
    printf("Enter length of side second: ");
    scanf("%d",&b);
    printf("Enter length of side one: ");
    scanf("%d",&c);
    if((a+b)>c && (a+c)>b && (b+c)>a){
        printf("%d, %d, %d are sides of a triangle.",a,b,c);
    }
    else{
        printf("%d, %d, %d are NOT sides of a triangle.",a,b,c);
    }
    return 0;
}