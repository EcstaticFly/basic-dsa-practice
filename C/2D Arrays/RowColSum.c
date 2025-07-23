#include <stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<n; i++){
        int row=0,col=0;
        for(int j=0;j<n; j++){
            row=row+arr[i][j];
            col=col+arr[j][i];
        }
        printf("Sum of %d row: %d\nSum of %d column: %d\n",i+1,row,i+1,col);
    }
    return 0;
}