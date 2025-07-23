#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%3==0 || i%10==3 || (i>=30 && i<=39)){
            printf("Buzz! ");
        }
        else{
            printf("%d ",i);
        }
    }
    return 0;
}