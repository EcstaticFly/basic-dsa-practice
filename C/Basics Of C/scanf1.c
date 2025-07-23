#include <stdio.h>
int main()
{
int n;
printf("Enter number of Students:");
scanf("%d",&n);
printf("%d",(((n*n+5*n+1)/5)*6)/(2*n));
return 0;

}