#include<stdio.h>
void greet(int x){
    if(x==0) return; //base code
    printf("Good Morning\n"); //code
    greet(x-1); //call
    return;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    greet(n);
    return 0;
}