#include <stdio.h>
#include <math.h>
int power(int a,int b){
    int r=1;
    for(int i=1;i<=b;i++){
        r=r*a;
    }
    return r;
}
int fac(int x){
    if(x==0) return 1;
    else return x*fac(x-1);
}
int main(){
    //1.) Prime/Composite:
        int a;
        printf("Enter the number: ");
        scanf("%d",&a);
        int b=0;
        for(int j=2;j<=sqrt(a);j++){
            if(a%j==0){
            b=1;
            break;
            }
        }
        if(a<=1) printf("%d is neither a prime nor a composite number.",a);
        else if(b==0 ) printf("%d is a prime number.",a);
        else printf("%d is a composite number.",a);
        return 0;
    }




    //2.)Palindrome number:
    //     int n;
    //     printf("Enter the number: ");
    //     scanf("%d",&n);
    //     int p=n;
    //     int m=0;
    //     while (n>0) {
    //         int q=n%10;
    //         m=(m*10)+q;
    //         n=n/10;
    //     }
    //     if(p==m) printf("%d is a palindrome number.",p);
    //     else printf("%d is not a palindrome number", p);

    //  return 0;
    // }





    //3.)Automorphic Number:
    // long long n;
    // printf("Enter the number: ");
    // scanf("%lld",&n);
    // long long q=n;
    // long long p=n*n;
    // int m=0;
    // while(n>0){
    //     if(p%10!=n%10){
    //         m=1;
    //         break;
    //     }
    //     n=n/10;
    //     p=p/10;
    // }
    // if(m==0) printf("%d is a automorphic number.",q);
    // else printf("%d is not an automorphic number.",q);
    // return 0;
    // }



   //4.)Dudeney Number:
    //     int n;
    //     printf("Enter the number: ");
    //     scanf("%d",&n);
    //     int p=n;
    //     int s=0;
    //     while(n>0){
    //         s=s+(n%10);
    //         n=n/10;
    //     }
    //     if(s*s*s==p) printf("It is a dudeney number");
    //     else printf("It is not a dudeney number");
    //     return 0;
    // }




    //5.)Perfect NUmber:
    //         int n;
    //         printf("Enter the number: ");
    //         scanf("%d",&n);
    //         int s=0;
    //         for(int i=1;i<=n-1;i++){
    //             if(n%i==0) s+=i;
    //         }
    //         if(s==n) printf("It is a perfect number");
    //         else printf("It is not a perfect number");
    //         return 0;
    // }




    //6.)Armstrong Number:
    //         int n;
    //         printf("Enter the number: ");
    //         scanf("%d",&n);
    //         int p=n;
    //         int c=0;
    //         while(n>0){
    //             c++;
    //             n=n/10;
    //         }
    //         n=p;
    //         int sum=0;
    //         while(n>0){
    //             sum=sum+(power(n%10,c));
    //             n=n/10;
    //         }
    //         if(sum==p) printf("It is an Armstrong number");
    //         else printf("It is not an Armstrong Number");
    //         return 0;
    // }
        


    //7.)Krishnamurthy Number:
    //     int n;
    //     printf("Enter the number: ");
    //     scanf("%d",&n);
    //     int p=n;
    //     int s=0;
    //     while(n>0){
    //         s=s+fac(n%10);
    //         n=n/10;
    //     }
    //     if(s==p) printf("It is a Krihnamurthy Number");
    //     else printf("It is not a Krihnamurthy Number");
    //     return 0;
    // }

