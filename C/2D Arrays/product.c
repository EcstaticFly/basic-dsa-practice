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
    printf("Enter second matrix:\n");
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    int crr[n][n];
    printf("Product of the two matrices:\n");
    for (int i=0;i<=n-1;i++) {
        for (int j=0;j<=n-1;j++) {
            crr[i][j] = 0;
            for (int k=0;k<=n-1;k++) {
                crr[i][j]+=arr[i][k]*brr[k][j];
            }
        }
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}