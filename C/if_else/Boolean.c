#include <stdio.h>
int main(){
    int x=3,y,z;
    y=x=10; //here x value updation takes place(to 10). and y also gets value=10.
    z=x<10; //here it first checks if x<10, which is false,as x got a value updation(to 10).
    //So, X<10 is FALSE i.e. 0. so now z=0.
    printf("x=%d y=%d z=%d",x,y,z);
    return 0;
}