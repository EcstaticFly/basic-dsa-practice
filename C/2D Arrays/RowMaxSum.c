#include<stdio.h>
#include<limits.h>
int main(){
    int r,c,maxsum=INT_MIN,p;
    printf("Enter no. of rows: ");
    scanf("%d",&r);
    printf("Enter no. of columns: ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            printf("Enter element no. (%d,%d): ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<=r-1;i++){
        int sum=0;
        for(int j=0;j<=c-1;j++){
            sum=sum+arr[i][j];
        }
        if(maxsum<sum){
           maxsum=sum;
           p=i;
        }
    }
    printf("Row with max sum of elements is %d(index) with sum= %d",p,maxsum);
    return 0;
}