#include <stdio.h>
int main(){
    //Hint 1) abhi jo count digits and sum digits kiya usi ke format pr based hai.
    //Hint 2)10  se multipy krna hai.
    int a;
    printf("enter number: ");
    scanf("%d",&a);
    int r=0;
    int ld;
    while(a!=0){
        ld=a%10;
        r=r*10;
        r=r+ld;
        a=a/10;
    }
    printf("Reverse of the number: %d",r);
    return 0;
}