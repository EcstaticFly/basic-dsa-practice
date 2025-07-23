#include <stdio.h>
int main(){
    int a;
    printf("Enter Number: ");
    scanf("%d",&a);
    if(a%5==0 || a%3==0){
        printf("%d is divisble by either 5 or 3.",a);
    }
    else{
        printf("%d is NOT divisble by either 5 or 3.",a);
    }
    return 0;
}