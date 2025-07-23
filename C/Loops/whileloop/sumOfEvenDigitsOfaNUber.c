#include <stdio.h>
int main(){
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    int sum=0;
    int ld=0;
    while(a!=0){
        ld=a%10;
        if(ld%2!=0){
           a=a/10;
        }
        else{ //ld%2=0
        sum=sum+ld;
        a=a/10;
        }
    }
    printf("Sum of even digits= %d",sum);
    return 0;
}