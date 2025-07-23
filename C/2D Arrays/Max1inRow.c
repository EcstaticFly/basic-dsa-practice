#include<stdio.h>
int main(){
    int r,c,p,maxcount=0;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter elements(0 and 1 only):\n");
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
        int count=0;
        for(int j=0;j<=c-1;j++){
            if(arr[i][j]==1) count++;
        }
        if(maxcount<count){
            maxcount=count;
            p=i;
        }
    }
    printf("Row with max 1's is %d(index) with no. of 1's= %d",p,maxcount);
    return 0;
}