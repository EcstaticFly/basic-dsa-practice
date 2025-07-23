#include <stdio.h>
int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    if (a % 5 == 0 && a % 3 == 0)
    { // or we can write a%15==0(as both divisble by 5 and 3 mean divisble by 15 too).
        printf("%d is divisble by 5 and 3.", a);
    }
    else
    {
        printf("%d is NOT divisble by 5 and 3.", a);
    }
    return 0;
}