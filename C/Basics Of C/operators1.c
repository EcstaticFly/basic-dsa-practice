#include <stdio.h>
int main()
{
    int a=0,b=40;
    printf("a && b=%d\n"  , a&&b); //AND operator//
    printf("a-b=%d\n"  , a==b);    //double equal means both value should be equal,then true//
    printf("a || b=%d\n" , a||b); //OR operator//
    printf("a*b=%d\n" , !b);     //NOT operator (used here for b)/
    return 0;

}