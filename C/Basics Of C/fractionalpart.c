#include <stdio.h>
int main()
{
    float n;
    printf("Enter number: ");
    scanf("%f",&n);
    int m;
    m=n; //since m is integer type, so it will only store integral part of n
    printf("Fractional part of the number= %f", n-m);

    return 0;
}