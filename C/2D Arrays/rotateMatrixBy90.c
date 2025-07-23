#include<stdio.h>
int main(){
    int r,c;
    printf("Enter numbe of rows: ");
    scanf("%d",&r);
    printf("Enter numbe of columns: ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Given Matrix:\n");
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Rotating the given matrix by 90 degree:\n");
    //Transpose then reverse each row.
    for(int i=0;i<=r-1;i++){ //transpose of matrix
        for(int j=i;j<=c-1;j++){ //by swapping arr[i][j] and arr[j][i]
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<=c-1;i++){ //reverse each row
        for(int j=0;j<=(r-1)/2;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[i][r-1-j];
            arr[i][r-1-j]=temp;
        }
    }
    for(int i=0;i<=c-1;i++){
        for(int j=0;j<=r-1;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}