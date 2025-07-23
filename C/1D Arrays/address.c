#include<stdio.h>
int main(){
    int arr[5]={5,7,4,72,76};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p",&arr[4]);
    return 0;
}