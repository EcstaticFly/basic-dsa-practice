#include<stdio.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    } date;
    date a,b;
    scanf("%d %d %d",&a.day,&a.month,&a.year);
    scanf("%d %d %d",&b.day,&b.month,&b.year);
    if(a.day==b.day && a.month==b.month && a.year==b.year) printf("Equal");
    else printf("Unequal");

    //We can't directly compare user defined datatype in if statement. Like we CAN'T use if(a==b) bcoz,a and b are of DATE datatype. But,a.day or a.month or a.year is of int datatype, so they can be compared.

    return 0;
}