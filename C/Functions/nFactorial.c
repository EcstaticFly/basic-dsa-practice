#include<stdio.h>
int fac(int x){
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
    for(int i=1;i<=n;i++){
    int factorial=fac(i);
    printf("The factoriL of %d is %d\n",i,factorial);
    }
    return 0;
}