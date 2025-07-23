#include<stdio.h>
#include<limits.h>
int main(){
    int r,c,a,b,p,q;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            printf("Enter element number (%d,%d): ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            if(max<arr[i][j]){
            max=arr[i][j];
            a=i;b=j;
            }
        }
    }
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            if(min>arr[i][j]){
            min=arr[i][j];
            p=i,q=j;
            }
        }
    }
    printf("Max. Element of the given matrix is %d with index (%d,%d)\nMin Element of the give matrix is %d with index (%d,%d)",max,a,b,min,p,q);
    return 0;
}