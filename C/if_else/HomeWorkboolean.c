#include <stdio.h>
int main(){
    int a=5,b,c;
    b=a=15; //a value updation to 15. b also equals to 15. 
    c=a<16; //a<16 is true(as a=15). so, c gets value=true i.e. 1.
    printf("a=%d b=%d c=%d",a,b,c);
    return 0;
}