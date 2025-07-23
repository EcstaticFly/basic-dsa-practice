#include <stdio.h>
int main(){
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    int b=a;
    int r=0;
    int ld=0;
    while(a!=0){
        ld=a%10;
        r=r*10;
        r=r+ld;
        a=a/10;
    }
    printf("Sum of given number(%d) and its reverse(%d): %d",b,r,b+r);
    return 0;
}