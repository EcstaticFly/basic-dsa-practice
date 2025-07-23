#include <stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int b=a;
    // int i=1;
    char x='!';
    // while(b!=i){
    //     a=a*(b-i);
    //     i++;
    // } //Doesn't include 0!=1.



    int product=1; //includes 0!=1.
    for(int i=1;i<=a;i++){
        product=product*i;
    }
    printf("factorial of given number(%d%c)= %d",b,x,product);
    return 0;
}