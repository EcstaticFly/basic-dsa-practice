#include <stdio.h>
int main(){
    int a,b;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    printf("Enter number of columns: ");
    scanf("%d",&b);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(j==1 || j==b || i==1 || i==a){
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0;
}