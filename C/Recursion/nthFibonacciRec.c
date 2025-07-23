// M1)[Loop Approach]

// #include<stdio.h>
// int main(){
//     //1,1,2,3,5,8,13,21,34,55,89...
//     int n;
//     printf("Enter the term you want: ");
//     scanf("%d",&n);
//     int a=1;
//     int b=1;
//     int temp;
//     for(int i=1;i<=n-2;i++){
//     temp=a+b;
//     a=b;
//     b=temp;
//     }
//     printf("%d",b);
//     return 0;
// }



// M2)[Return Type]

#include<stdio.h>
//1,1,2,3,5,8,13,21,34,55,89,144...
int fibo(int x){
    if(x==1 || x==2) return 1;
    return fibo(x-1)+fibo(x-2);
}
int main(){
    int n;
    printf("Enter the term you want: ");
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}