#include<stdio.h>
int factorial(int x){
    int fac=1;
    for(int i=1;i<=x;i++){
    fac=fac*i;
    }
    return fac;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int nsp=n;
    for(int i=0;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
     for(int j=0;j<=i;j++){
       int icj=factorial(i)/(factorial(j)*factorial(i-j));
        printf("%d ",icj);
        }
        nsp--;
        printf("\n");
    }
    return 0;
}
//THIS IS AN INEFFECINT METHOD AS COMPUTER HAS TO SAME CALCULATIONS MULTIPLE TIMES.
//To see the better way using maths,look PascalTriangleOPtimised.c