#include <stdio.h>
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){ //for whitespace print first. we need new loop.
            printf(" ");
        }
        for(int k=1;k<=i;k++){//for print *.
            printf("*");
        }
        printf("\n");
    }
    return 0;
}