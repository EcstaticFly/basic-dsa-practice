#include <stdio.h>
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    // for(int i=1;i<=a;i++){
    //      for(int j=1;j<=(a+1)-i;j++){ //if i=1,and a=4(say) j<=4. so, 4 times column loop runs and 4* printed.
    //      //if i=2,j=(4+1)-2=3.so, 3 times column loop runs and 3* printed.
    //      //if i=3,j=(4+1)-3=2.So,2 times column loop run and 2* printed. And so on...
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    int b=a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            printf("*");
        }
        b--;
        printf("\n");
    }
    return 0;
}