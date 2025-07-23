#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i=i+1){
        printf("%d\n",n*i);
    }
    return 0;
}