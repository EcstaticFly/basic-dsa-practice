#include <stdio.h>
int main()
{
    int l,b;
    printf("Enter length: ");
    scanf("%d",&l);
    printf("Enter breadth: ");
    scanf("%d",&b);
    if(l*b>(2*(l+b))){
        printf("Area of rectangle is GREATER than its perimeter.");
    }
    if(l*b<(2*(l+b))){
        printf("Area of rectangle is LESS than its perimeter.");
    }
    if(l*b==(2*(l+b))){
        printf("Area of rectangle is EQUAL to its perimeter.");
    }
    return 0;

}