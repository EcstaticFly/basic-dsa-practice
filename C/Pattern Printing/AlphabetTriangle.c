#include <stdio.h>
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        char x='A';
        for(int j=1;j<=i;j++){
            printf("%c ",x);
            x=x+1;
        }
        printf("\n");
    }
    return 0;
}