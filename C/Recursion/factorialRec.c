#include<stdio.h>
int fac(int x){
    if(x==1 || x==0) return 1; //Base Case
    int recAns=x*fac(x-1);
    return recAns;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=fac(n);
    printf("factorial of %d is %d.\n",n,a);
    return 0;
}