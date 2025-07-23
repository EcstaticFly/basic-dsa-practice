#include<stdio.h>
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    int n=a-1;
    int nsp=1;
    int nst=n;
    for(int i=1;i<=2*n+1;i++){ //sirf first line ke liye. alag se code.
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
         printf(" ");
        }
        for(int l=1;l<=nst;l++){
            printf("*");
        }
        nst--;
        nsp=nsp+2;
        printf("\n");
    }
    return 0;
}