#include<stdio.h>
int main(){
    int a;
    printf("Enter number of stars you want: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int k=1;k<=a;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}