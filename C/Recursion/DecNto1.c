#include<stdio.h>
void dec(int x){
    if(x==0) return; //base code
    printf("%d ",x); //code
    dec(x-1); //call
    return;
}
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    dec(n);
    return 0;
}