#include<stdio.h>
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    int nst=a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=nst;j++){
        printf("%d ",2*j-1);
    }
    nst--;
    printf("\n");
    }
    return 0;
}