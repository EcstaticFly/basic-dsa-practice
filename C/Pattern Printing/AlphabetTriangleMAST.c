#include<stdio.h>
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        char x='A';
        for(int k=1;k<=i;k++){
            printf("%c",x); //or,k+64
            x=x+1;
        }
        printf("\n");
    }
    return 0;
}