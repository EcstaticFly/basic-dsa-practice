#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            sum=sum + arr[i][j];
        }
    }
    printf("Sum of all elements of the given matrix: %d",sum);
    return 0;
}