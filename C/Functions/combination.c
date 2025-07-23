#include<stdio.h>
int factorial(int x){
    int fac=1;
    for(int i=1;i<=x;i++){
        fac=fac*i;
    }
    return fac;
    }
int main(){
// int n,r;//without fxns.
// printf("Enter n: ");
// scanf("%d",&n);
// printf("Enter r: ");
// scanf("%d",&r);
// int nfac=1,rfac=1,nrfac=1; //nfac=n!,rfac=r!,nrfac=(n-r)!
// for(int i=1;i<=n;i++){
//     nfac=nfac*i;
// }
// for(int j=1;j<=r;j++){
//     rfac=rfac*j;
// }
// for(int k=1;k<=n-r;k++){
//     nrfac=nrfac*k;
// }
// float ncr=nfac/(rfac*nrfac);
// printf("%dC%d=%f",n,r,ncr);
//     return 0;
//}


//with fxns.
int n,r;
printf("Enter n: ");
scanf("%d",&n);
printf("Enter r: ");
scanf("%d",&r);
float ncr=factorial(n)/(factorial(r)*factorial(n-r));
printf("%dC%d=%f",n,r,ncr);
// int a=factorial(9); // Ye bas aise hi dikhane ke liye hai.
// printf("%d",a); //Ki direct kisi no. ka factoria bhi le skte hai fxn use krke.
return 0;
}