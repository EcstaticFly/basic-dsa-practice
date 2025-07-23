#include<stdio.h>
int main(){
    int a;
    printf("Enter no. of rows: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
         for(int k=1;k<=a-i;k++){ //we print spaces first.
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){ //then we print *
            printf("*");
        }
        printf("\n");
    }
    return 0;
}