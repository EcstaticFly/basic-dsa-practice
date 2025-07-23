#include <stdio.h>
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    int b;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            b=2*j-1;
            printf("%d ",b);
        }
        printf("\n");
    }
    return 0;
}