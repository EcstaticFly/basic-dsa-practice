#include<stdio.h>
// int minimum(int m, int n){
//     int min;
//     if(m<n){min=m;}
//     else{min=n;}
//     return min;
// }
// int gcd(int x, int y){ //gcd-Greatest Common Divisor.
//     int hcf;
//     for(int i=minimum(x,y);i>=1;i--){
//         if(x%i==0 && y%i==0){
//             hcf=i;
//             break; //IMPORTANT
//         }
//     }
//     return hcf;
// }

//Better fxn:

int hcf(int x,int y){
	if(y==0) return x;
	else return hcf(y,x%y);
} 


int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    int h=hcf(a,b);
    printf("The HCF of a and b is: %d",h);
    return 0;
}