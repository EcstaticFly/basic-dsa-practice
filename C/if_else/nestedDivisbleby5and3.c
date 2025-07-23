#include <stdio.h>
int main(){
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    if(a%5==0){
        if(a%3==0){
        printf("%d is divisble by 5 and 3.",a);
        }
        else{
            printf("%d is not divisble by 5 and 3.",a);
        }
    }
    else{
        printf("%d is not divisble by 5 and 3.",a);
    }
    return 0;
    }
    
