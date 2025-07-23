#include<stdio.h>
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    int m=a-1;
    int nsp=1;
    int nst=m;
    for(int i=1;i<=2*m+1;i++){
        printf("%d",i); 
    }
    printf("\n");
    for(int i=1;i<=m;i++){
        int n=1;
        for(int j=1;j<=nst;j++){
            printf("%d",n);
            n++;
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
            n++;
        }
        for(int l=1;l<=nst;l++){
            printf("%d",n);
            n++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}