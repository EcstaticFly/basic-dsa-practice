#include <stdio.h>
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int i=1;i<=a;i++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}