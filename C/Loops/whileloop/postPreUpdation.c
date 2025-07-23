#include <stdio.h>
int main(){
    int x=3;
    printf("%d ",x);
    // printf("%d ",x++); // means use x, then increment.[therefore,x=3 will be printed and then inc.][final output 3 3]
    printf("%d ",++x); //means,increment then use.[therefore,x=3+1=4 will be printed.][final output 3 4]
    return 0;
}