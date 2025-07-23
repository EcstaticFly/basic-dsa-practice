// M1)[Loop Approach]

// #include <stdio.h>
// int degree(int x, int y)
// {
//     int z=x;
//     for (int i = 1;i<=(y-1); i++)
//     {
//         x=z*x;
//     }
//     return x;
// }
// int main()
// {
//     int a, b;
//     printf("Enter base: ");
//     scanf("%d", &a);
//     printf("Enter power: ");
//     scanf("%d", &b);
//     int d = degree(a, b);
//     printf("%d raised to power %d is %d",a,b,d);
//     return 0;
// }



// M2)[Return Type]

#include <stdio.h>
int degree(int x, int y)
{
    if (y == 0)
        return 1;
    int d = x * degree(x, y - 1);
    return d;
}
int main()
{
    int a, b;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);
    int power = degree(a, b);
    printf("%d raised to power %d is %d",a,b,power);
    return 0;
}