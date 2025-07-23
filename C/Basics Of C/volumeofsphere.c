#include <stdio.h>
int main()
{
    float r;
    printf("enter radius= ");
    scanf("%f", &r);
    printf("volume of sphere= %f", (4*3.14*r*r*r)/3);
    return 0;
}