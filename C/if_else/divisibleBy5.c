#include <stdio.h>
int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    if(a%5==0){
        printf("%d is divisible by 5",a);
    }
    else{
        printf("%d is not divisible by 5",a);
    }
    return 0;
}