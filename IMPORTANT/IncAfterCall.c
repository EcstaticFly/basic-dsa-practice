// METHOD1) Parameterized way(normal way)

// #include <stdio.h>
// void inc(int x, int a)
// {
//     if (x > a)    //base code
//         return;
//     printf("%d ", x); //code
//     inc(x + 1, a); //call
//     return;
// }
// int main()
// {
//     int n;
//     printf("Enter n: ");
//     scanf("%d", &n);
//     inc(1, n);
//     return 0;
// }



// METHOD2)(After Recursive Call)(VERY VERY IMPORTANT!!)
// This is not even the code for inc fxn.
// It's the same code as that for the dec number(copy paste)(where we have to print like 5 4 3 2 1).
// But,with just a short change of order in--> base code THEN,call THEN code. It has now become a code for inc fxn(1 2 3 4 5).


//I've deliberately not changed the name of dec fxn to inc fxn, to let you know this code is just a copy of dec fxn code(DecNto1.c) with a slight change in order of call,code.

#include <stdio.h>
void dec(int x) 
{
    if (x == 0)
        return;       // base code
    dec(x - 1);       // call
    printf("%d ", x); // code
    return;
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    dec(n);
    return 0;
}