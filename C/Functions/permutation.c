#include<stdio.h>
int factorial(int x){
    int fac=1;
    for(int i=1;i<=x;i++){
        fac=fac*i;
    }
    return fac;
}
int main(){
    int n,r;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d",&r);
    int npr=factorial(n)/factorial(n-r);
    printf("nPr= %d",npr);
    return 0;
}