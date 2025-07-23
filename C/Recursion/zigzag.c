#include<stdio.h>
//same preINpost code, with some changes in printf.
void preInpost(int x){
    if(x==0) return;
    printf("%d",x);
    preInpost(x-1);
    printf("%d",x);
    preInpost(x-1);
    printf("%d");
    return;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    preInpost(n);
    return 0;
}