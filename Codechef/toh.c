#include<stdio.h>

void toh(int n,char s,char h,char d){
    if(n==0) return;

    toh(n-1,s,d,h);
    printf("Move sic %d from %c to %c\n",n,s,d);
    toh(n-1,h,s,d);
}

int main(){
    int n;
    scanf("%d",&n);
    toh(n,'A','B','C');
    return 0;
}