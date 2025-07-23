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
            printf("Enter element no.(%d,%d): ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<=r-1;i++){
         if(i%2==0){
            for(int j=0;j<=c-1;j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
         }
            else{
                for(int j=c-1;j>=0;j--){ //we are just printing it in the reverse form,not actually reversing anything in the matrix
                printf("%d ",arr[i][j]);
            }
            printf("\n");
            }
    }
    return 0;
}