// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     int a=0,b=1;
//     if(n==1) printf("%d",a);
//     else if(n==2) printf("%d %d",a,b);
//     else{
//         printf("0 1 ");
//         for(int i=1;i<=n-2;i++){
//         int temp=a+b;
//         a=b;
//         b=temp;
//         printf("%d ",b);
//     }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     int a=1,sum=0;
//     for(int i=1;i<=n-1;i++){
//         a=a*10+1;
//         sum=sum+a;
//     }
//     printf("%d",sum+1);
//     return 0;
// }

#include<stdio.h>
int main(){
    int n,x,sum=0;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter n: ");
    scanf("%d",&n);
    int c=x;
    for(int i=1;i<=n-1;i++){
        x=x*c;
        sum=sum+x;
    }
    printf("%d",sum+x);
    return 0;
}