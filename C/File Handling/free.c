#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr=(int*) calloc(10,sizeof(int));
    int *p=ptr; //starting ka address preserve krlo
    p++;
    free(ptr);
    return 0;
}