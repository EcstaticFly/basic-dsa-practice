#include<stdio.h>
int main(){
    int r,c;
    printf("Enter no. of rows: ");
    scanf("%d",&r);
    printf("Enter no. of columns: ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Transpose of the matrix:\n");
    for(int i=0;i<=c-1;i++){
        for(int j=0;j<=r-1;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}