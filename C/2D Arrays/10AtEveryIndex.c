#include<stdio.h>
int main(){
    int n,arr[5][5];
    printf("Enter No. you want to store at every index: ");
    scanf("%d",&n);
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            arr[i][j]=n;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}