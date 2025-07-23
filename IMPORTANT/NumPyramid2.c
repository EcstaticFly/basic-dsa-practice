#include<stdio.h>
int main(){
    int a;
    printf("Enter number 0f rows: ");
    scanf("%d",&a);
    int nsp=1;
    int nst=a;
    int n=a;
    for(int i=1;i<=2*a+1;i++){
        if(i<=a+1){
        printf("%d",i);
        }
        else{
        printf("%d",2*a+2-i);
        }
    }
        printf("\n");
    for(int i=1;i<=a;i++){
        for(int j=1;j<=nst;j++){
            printf("%d",j);
        }
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("%d",n+1-k);
        }
        n--;
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
    }