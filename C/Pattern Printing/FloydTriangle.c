#include <stdio.h>
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    int b=1; //dhyan rhe ki ye bahar hoga loop ke.
    for(int i=1;i<=a;i++){
       for(int j=1;j<=i;j++){
        printf("%d ",b);
        b++;
       }
        printf("\n");
    }
    return 0;
}