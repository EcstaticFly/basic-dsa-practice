#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    if(a>b){
        if(a>c){                    //b is out of race.
            printf("%d is the greatest number.",a);
        }
        else{
            printf("%d is the greatest number.",c);
        }
}
else{ //when b>a. So, a is out of race.
     if(b>c){
    printf("%d is the greatest number.",b);
     }
     else{ //c>b. b out of race.
     printf("%d is the greatest number.",c);
     }
}
return 0;
}