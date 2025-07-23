#include<stdio.h>
int main(){
    int n=7;
    for(int i=1;i<=2*n-1;i++){
        if(i<=n){
        for(int k=1;k<i;k++){
            printf(" ");
        }
        for(int j=1;j<=2*n-(2*i-1);j++){
            printf("*");
        }
        printf("\n");
        }
        else{
            for(int l=1;l<=2*n-1-i;l++){
                printf(" ");
            }
            for(int m=1;m<=2*i-(2*n-1);m++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}