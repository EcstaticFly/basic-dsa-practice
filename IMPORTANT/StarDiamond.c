#include<stdio.h>
int main(){
    int a;
    printf("Enter no. of rows(odd only): ");
    scanf("%d",&a);
    int nsp=a/2; //since,a=odd=7(say).so,a/2=3(for int fxn.).
    int nst=1; //since first line has one star.
    int ml=(a+1)/2;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=nsp;j++){ //for spaces
        printf(" ");
        }
        for(int k=1;k<=nst;k++){ //for stars
            printf("*");
        }
        if(i<ml){
        nsp--;
        nst+=2;
        }
        else{
        nsp++;
        nst-=2;
        }
        printf("\n");
    }
    return 0;
    }