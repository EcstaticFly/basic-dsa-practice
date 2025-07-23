#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr=(int*)malloc(10*sizeof(int));
    printf("%p\n",ptr);
    ptr=realloc(ptr,20*sizeof(int));
    printf("%p",ptr);
    //agar naye size jitni space orignal ptr,ke pass khali hai,so,realloc vahi naye integers add kr dega uske aage.But agar orignal ptr ke pass mein itni space nhi khali hai..so vo pure ptr ko kahin alag nai space de dega
    return 0;
}