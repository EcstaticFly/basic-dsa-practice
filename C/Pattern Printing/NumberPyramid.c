#include<stdio.h>
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int k=1;k<=a-i;k++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}