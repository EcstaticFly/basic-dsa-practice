#include <stdio.h>
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    // for(int i=1;i<=a;i++){
    //      for(int j=1;j<=(a+1)-i;j++){ 
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }


    int b=a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            printf("%d ",j);
        }
        b--;
        printf("\n");
    }
    return 0;
}