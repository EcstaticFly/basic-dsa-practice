#include <stdio.h>
int main(){
    //0,1,1,2,3,5,8,13,21,34,55,89,...
    int a;
    printf("Enter the term you want: ");
    scanf("%d",&a);
    int b=0;
    int c=1;
    int sum=1;
    printf("The 1th fibonacci number is 0.\n");
    printf("The 2th fibonacci number is 1.\n");
    {for(int i=1;i<=a-2;i++){
        sum=b+c;
        b=c;
        c=sum;
        printf("The %dth fibonacci number is %d.\n",i+2,sum);
    }
    return 0;
}