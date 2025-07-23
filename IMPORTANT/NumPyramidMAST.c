#include<stdio.h>
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int l=1;l<=a-i;l++){ //spaces ke liye.
            printf(" ");
        }
        for(int j=1;j<=i;j++){ //Normal number triangle wala.
            printf("%d",j);
        }
        for(int k=1;k<=i-1;k++){ //Jo beech mein se reverse number print hona shuru hogya hai. 
            printf("%d",i-k);
        }
        printf("\n");
    }
    return 0;
}