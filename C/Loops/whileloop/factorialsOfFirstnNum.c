#include <stdio.h>
int main(){
    int a;
    printf("Enter Number: ");
    scanf("%d",&a);
    int product=1;
    for(int i=1;i<=a;i++){
        product=product*i;
         printf("THe factorial of %d is %d\n",i,product);
    }
    return 0;
}