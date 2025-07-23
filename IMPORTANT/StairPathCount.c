#include<stdio.h>
int stair(int x){
    if(x<0) return 0;
    if(x<=1) return 1;
    return stair(x-1)+stair(x-2); 
    // +stair(x-3);
}
int main(){
    int n;
    printf("Enter the nth stair: ");
    scanf("%d",&n);
    int ways=stair(n);
    printf("%d",ways);
    return 0;
}