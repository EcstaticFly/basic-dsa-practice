#include <stdio.h>
int main()
{
    int a; //dabba ban gya
    printf("Enter number: ");
    scanf("%d",&a); //dabbe mein value daal di
    if(a%2==0){
        printf("%d is an even number",a);

    }
    else //we can also use if(a%2!=0)
    {
        printf("%d is an odd number",a);
    }
    return 0;

}