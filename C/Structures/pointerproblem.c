#include<stdio.h>
typedef int* pointer;
int main(){
    int x=5,y=7;
    int* a=&x,*b=&y;
    pointer c=&x,d=&y;
    printf("%p\n%p\n",a,b);
    printf("%p\n%p",c,d);
    return 0;

}