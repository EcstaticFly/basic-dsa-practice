// M1) [4 parameter approach]
// iss approach mein hum (1,1) se (a,b) tk jaenge.

// #include <stdio.h>
// int maze(int cr, int cc, int er, int ec)
// {
//     int rightways = 0;
//     int downways = 0;
//     if (cr == er && cc == ec)
//     {
//         return 1;
//     }
//     if (cr == er)
//     { // Only rightways possible now.
//         rightways += maze(cr, cc + 1, er, ec);
//     }
//     if (cc == ec)
//     { // Only downways possible now.
//         downways += maze(cr + 1, cc, er, ec);
//     }
//     if (cr < er && cc < ec)
//     {
//         rightways += maze(cr, cc + 1, er, ec);
//         downways += maze(cr + 1, cc, er, ec);
//     }
//     int totalways = rightways + downways;
//     return totalways;
// }
// int main()
// {
//     int a, b;
//     printf("Enter number of rows: ");
//     scanf("%d", &a);
//     printf("Enter number of columns: ");
//     scanf("%d", &b);
//     int noOfways = maze(1, 1, a, b);
//     printf("%d", noOfways);
//     return 0;
// }





// M2) [2 parameter approach]
// Iss approach mein hum ulta chalenge.Like (a,b) se (1,1) jaenge.No. of ways same hi rhenge ofc.

#include <stdio.h>
int maze(int x, int y)
{
    int rightways = 0;
    int downways = 0;
    if (x == 1 && y == 1)
        return 1;
    if (x == 1)
    { // only rightways possible now.
        rightways += maze(x, y - 1);
    }
    if (y == 1)
    { // only downways possible now.
        downways += maze(x - 1, y);
    }
    if (x > 1 && y > 1)
    {
        rightways += maze(x, y - 1);
        downways += maze(x - 1, y);
    }
    int totalways = rightways + downways;
    return totalways;
}
int main()
{
    int a, b;
    printf("Enter number of rows: ");
    scanf("%d", &a);
    printf("Enter number of columns: ");
    scanf("%d", &b);
    int noOfways = maze(a, b);
    printf("%d", noOfways);
    return 0;
}