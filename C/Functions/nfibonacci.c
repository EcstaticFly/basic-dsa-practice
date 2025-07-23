#include<stdio.h>
int sum(int x){
    int a=1;
    int b=1;
    int sum=1;
    for(int i=1;i<=x-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("The %d fibonacci number is %d\n",i+2,sum);
    }
    return sum;
}
int main(){
    //1,1,2,3,5,8,13,21,34,55,89...
    int n;
    printf("Enter number of terms you want: ");
    scanf("%d",&n);
    printf("The 1 fibonacci number is 1\n");
    printf("The 2 fibonacci number is 1\n");
    int fibo=sum(n);
    return 0;
}