#include<stdio.h>
int main(){
    // int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // or, int brr[2][2]={1,2,3,4}.Correct. Computer automatically samjh jaega aur khud use 2x2 ki matrix ki trah input le lega.
    int r,c;
    printf("Enter no. of rows: ");
    scanf("%d",&r);
    printf("Enter no. of columns: ");
    scanf("%d",&c);
    int brr[r][c]; //input r*c elements 
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            printf("Enter element number (%d,%d): ",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}