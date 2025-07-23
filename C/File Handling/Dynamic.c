#include<stdio.h>
#include<stdlib.h> //needed for dynamic memory allocation
int main(){
    // int n;
    // scanf("%d",&n);
    // int arr[n]; //Shockingly,arr[n] is NOT recommended


    //Malloc:
    int *ptr=(int *) malloc(100*sizeof(int)); //memory for 100 integers
    char *str=(char *) malloc(320*sizeof(char)); //memory for 320 characters


    //Calloc:
    float *real=(float*) calloc(25,sizeof(float)); //Memory for 25 real no.
    char* lol=(char*) calloc(40,sizeof(char)); //Memory for 40 characters

    //Diff b/w malloc and calloc:
    //calloc intialises all allocated memory blocks with value 0.
    //malloc intialises all allocated memory blocks with garbage value.

    printf("%d\n",*ptr);

    return 0;
}