#include <stdio.h>
int main(){
    int n;
    printf("no. of terms you want to display: ");
    scanf("%d",&n);
    for(int i=1;i<=1+(n-1)*2;i=i+2){
        printf("%d ",i);
    }
    return 0;
}