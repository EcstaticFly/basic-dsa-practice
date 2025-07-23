#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("\n");
    int minr=0,maxr=n-1;
    int minc=0,maxc=n-1;
    int te=n*n,count=0,m=1; //te=total elements
    while(count<te){
        //print the minimum row
        for(int j=minc;j<=maxc && count<te;j++){
            arr[minr][j]=m;
            m++;
            count++;
        }
        minr++;
        //print maximum column
        for(int i=minr;i<=maxr && count<te;i++){
            arr[i][maxc]=m;
            m++;
            count++;
        }
        maxc--;
        //print maximum row
        for(int j=maxc;j>=minc && count<te;j--){
            arr[maxr][j]=m;
            m++;
            count++;
        }
        maxr--;
        //print minimum column
        for(int i=maxr;i>=minr && count<te;i--){
            arr[i][minc]=m;
            m++;
            count++;
        }
        minc++;
    }

    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}