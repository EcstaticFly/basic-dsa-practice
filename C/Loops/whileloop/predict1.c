#include <stdio.h>
int main(){
    int x=4,y,z;
    y=--x; //pre increment/updation, so, it first changes value of x=4 to y=x-1=3.then prints y=3.
    z=x--; //post increment/updation,so,it first prints the value of x(i.e.=3,as it was updated for y.) as value of z.Now, z=x-1=3-1=2.It updates value of x to 2(final).
    //Therefore, finally, x=2,y=3,z=3.
    printf("%d %d %d",x,y,z);
    return 0;
}