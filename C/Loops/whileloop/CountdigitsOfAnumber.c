#include <stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    //number ko ten se divide krte rho jb tak no. 0 na bn jae.
    //Fir jitni baar ten se divide kiya hai, mtlb jitni baar loop run kiya hai.Vo count kr le.
    //Utne hi no. of digits ho jaenge.
    int count=0;
    while(a!=0){
        a=a/10;
        count++;
    }
    printf("The number of digits are %d",count);
return 0;
}