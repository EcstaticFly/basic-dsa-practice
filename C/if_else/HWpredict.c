#include <stdio.h>
int main(){
    int x=15;
    printf("%d %d %d",(x!=15),x=20,x<30);
    return 0; //IDK why it's giving "x not equal to 15" as true, when clearly int x=15;
    //maybe its taking x=20 first then giving 20 not equal to 15 as true. but this shouldn't happen.
    //Don't know what's wrong.
}