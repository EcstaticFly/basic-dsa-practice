#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i-1;k++){
            printf(" ");
        }
        for(int j=1;j<=n+1-i;j++){
            printf("%d ",j);
        }
        printf("\n");
        }
    return 0;
}