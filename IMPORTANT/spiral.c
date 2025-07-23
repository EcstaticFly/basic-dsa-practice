#include<stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nGiven matrix:\n");
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nElements when going in spiral:\n");
    int minr=0,maxr=r-1;
    int minc=0,maxc=c-1;
    int te=r*c,count=0; //te=total elements
    while(count<te)
    {
        //print the minimum row
        for(int j=minc;j<=maxc && count<te;j++){
            printf("%d ",arr[minr][j]);
            count++;
        }
        minr++;
        //print the maximum column
        for(int i=minr;i<=maxr && count<te;i++){
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        //print the maximum row
        for(int j=maxc;j>=minc && count<te;j--){
            printf("%d ",arr[maxr][j]);
            count++;
        }
        maxr--;
        //print the minimum column
        for(int i=maxr;i>=minr && count<te;i--){
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}