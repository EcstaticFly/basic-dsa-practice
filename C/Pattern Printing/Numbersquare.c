#include <stdio.h>
int main(){
    int a;
    printf("Enter Number of rows/column: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){ // OUTER LOOP= no. of rows. Use int i=1;
        for(int j=1;j<=a;j++){ //INNER LOOP= no. of columns. Use int j=1;
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}