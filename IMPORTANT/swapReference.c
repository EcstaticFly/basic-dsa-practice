#include<stdio.h>
void swap(int* x, int* y){
    int temp;
    temp=*x; //temp=2
    *x=*y; //a=9
    *y=temp; //*y=2 -> b=2
    return;
}
int main(){
    int a=2;
    int b=9;
    swap(&a,&b); //when we pass addresses instead of values.it is called PASS BY REFERENCE.
    printf("The value of a is: %d\n",a);
    printf("The value of b is: %d",b);
    return 0;
}