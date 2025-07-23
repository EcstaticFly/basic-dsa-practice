#include <stdio.h>
int main(){
    for(int i=2;i<=100;i=i+2){ //can also use if inside for to do it like
    // here, after for(int i=1;i<=100,i++)
    //if(i%2==0){printf("%d\n",i);} will also work same.
        printf("%d\n",i);
    }
    return 0;
}