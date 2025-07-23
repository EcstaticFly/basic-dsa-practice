#include<stdio.h>
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    int nsp=0;
    int nst=a;
    for(int i=1;i<=a;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        nsp++;
        nst--;
        printf("\n");
    }
    return 0;
}