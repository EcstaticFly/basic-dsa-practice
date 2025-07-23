// M1)[math approach]

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     printf("%f",(n/2.0)*(1+n));
//     return 0;
// }


// M2)[loop approach]

// #include<stdio.h>
// void sum(int x){
//     int s=0;
//     for(int i=1;i<=x;i++){
//         s=s+i;
//     }
//     printf("%d",s);
//     return;
// }
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     sum(n);
//     return 0;
// }


// M3)[Parameterised Approach]

// #include<stdio.h>
// void sum(int x,int s){
//    if(x==0){printf("%d",s);
//    return;}
//    sum(x-1,s+x);
//    return;
// }
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     sum(n,0);
//     return 0;
// }


// M4)[Return Type]

#include<stdio.h>
int sum(int x){
    if(x==1 || x==0) return x;
    int a= x + sum(x-1);
    return a;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int s=sum(n);
    printf("%d",s);
    return 0;
}