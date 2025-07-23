#include<stdio.h>

//T.C: O(logb);
int powerlog(int x,int y){
    if(y==0) return 1;
    int m=powerlog(x,y/2);
    if(y%2==0){
        return m*m;
    }
    else{
        return m*m*x;
    }
}
int main(){
    int a,b;
    printf("Enter base: ");
    scanf("%d",&a);
    printf("Enter power: ");
    scanf("%d",&b);
    printf("%d",powerlog(a,b));
    return 0;
}

//No. of steps being used here-->
//Say, we give power=n,
//So, power is going from n to 1,and when it reaches 1,it returns the value.
//So, power is going as;
//n,n/2,n/4,n/8,n/16,...4,2,1.
//So,no. of steps = no. of terms.And, last term=a*r^m-1,m=last term.
//So, 1=n*(1/2)^m-1
//=> 2^m-1=n => 2^m=2n
//=> m=log2(2n) [log base=2]
// m=log2(n) + log2(2) [Log2(2)=const.]


//Thus, no. of steps= log2(n). [where n=power]