#include <stdio.h>
int main(){ //series (a):1+2+3+4+5+6...
//Hint: 1)use loop and if-else.
// printf("Given series: 1+2+3+4+5+6...\n");
//     int a;
//     printf("Enter number of terms you want: ");
//     scanf("%d",&a);
//     int sum=0;
//     for(int i=1;i<=a;i++){
//         sum=sum+i;
//     }
//     printf("sum of %d terms= %d",a,sum);
//     return 0;


//series (b): 1-2+3-4+5-6...
// Method1)
//Hint: odd numbers are being added and even numbers are getting subtracted.
// printf("Given series: 1-2+3-4+5-6...\n");
// int a;
// printf("Enter number of terms you want: ");
// scanf("%d",&a);
// int sum=0;
// for(int i=1;i<=a;i++){
//     if(i%2!=0){
//        sum=sum+i;
//     }
//     else{//i%2=0
//     sum=sum-i;
//     }
// }
// printf("Sum of %d terms= %d",a,sum);
// return 0;
//problem here is that if a=10000.The loop will have to run 10000 times.



//Method2) BETTER!!!
//hint: 1-2+3-4+5-6... =(1-2)+(3-4)+(5-6)...=(-1)+(-1)+(-1)...
//So,for sum of n terms of series(n should be even) = sum of (-1), n/2 times.Thus,sum=-n/2.
//for odd, sum=+(n+1)/2.[or, (-n/2)+(n) will also work]
printf("Given series: 1-2+3-4+5-6...\n");
int a;
printf("Enter number of terms you want: ");
scanf("%d",&a);
int sum;
if(a%2==0){
    sum=(-a)/2;
}
else{ //a%2!=0
    sum=(a+1)/2;
}
printf("Sum of %d terms= %d",a,sum);
return 0;
}