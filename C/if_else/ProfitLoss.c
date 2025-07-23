#include <stdio.h>
int main()
{
    float sp,cp;
    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    printf("Enter Selling Price: ");
    scanf("%f", &sp);
    char a='%';
    if(sp>cp){
        printf("%f%c Profit", ((sp-cp)/cp)*100, a);
    }
    if(cp>sp){
        printf("%f%c Loss", ((cp-sp)/cp)*100, a);
    }
    if(sp==cp){
        printf("No profit,No loss");
    }
    return 0;
}