#include<stdio.h>
#define PI 3.1415926539 //koi point nhi hai,main directly ek variable declare kr dunga iss value ka,same thing
//Ek global variable ki tarah work kr rha


// float area(float r){
//     return PI*r*r;
// }

//iski jagah we can also write
#define area(r) PI*r*r  //macro fxn
int main(){
    // double m=3.1415926539;
    // printf("%lf",m);
    // printf("\n%lf",PI);
    printf("%f",area(10));
    return 0;
}