#include <stdio.h>
int main(){
    int a;
    printf("Enter Number: ");
    scanf("%d",&a);
    if(a>99 && a<1000)
    {
        printf("%d is a three digit number.",a);
    }
else{
    printf("%d is NOT a three digit number.",a);
}
return 0;

}