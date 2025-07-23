#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n][n],brr[n][n];
    printf("Enter first matrix:\n");
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            scanf("%d",&arr[i][j]);
            }
    }
    printf("Enter Second Matrix:\n");
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            scanf("%d",&brr[i][j]);
            }
    }
    printf("Sum of the given matrices:\n");
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            printf("%d ",brr[i][j]+arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}