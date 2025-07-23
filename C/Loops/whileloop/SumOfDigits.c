#include <stdio.h>
int main(){
    //hint:1)% operator and / operator used.
    //hint:2)1+2+3+4+5 = 5+4+3+2+1.
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    int sum=0;
    int lastDigit=0;
    while(a!=0){
        lastDigit=a%10;
    sum=sum+lastDigit;
    a=a/10;
    }
    printf("Sum of digits= %d",sum);
    return 0;
}