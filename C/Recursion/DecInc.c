#include<stdio.h>
void decinc(int x){
    if(x==0) return; 
    printf("%d\n",x);
   decinc(x-1);
   printf("%d\n",x);
   return;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    decinc(n);
    return 0;
}