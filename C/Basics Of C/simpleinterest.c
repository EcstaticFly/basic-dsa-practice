#include <stdio.h>
int main()
{
    float p,r,t;
    printf("Enter principal: ");
    scanf("%f",&p);
    printf("Enter rate: ");
    scanf("%f",&r);
    printf("Enter time(in years): ");
    scanf("%f",&t);

    printf("Simple Interest=%f", p*r*t/100);
    return 0;

}