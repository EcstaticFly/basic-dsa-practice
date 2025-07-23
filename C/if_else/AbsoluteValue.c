#include <stdio.h>
int main(){
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    if(a<0){
      printf("Absolute value: %d",a*(-1));
    }
    else {
        printf("Absolute value: %d",a);
    }
    return 0;
}