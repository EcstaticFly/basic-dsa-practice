#include <stdio.h>
int main(){
    int a;
    printf("Enter the no. of GP terms you want: ");
    scanf("%d",&a);
    // 1 2 4 8 16 32...
    int n=1;
    for(int i=1;i<=a;i=i+1){ //loop will run a times.
        printf("%d ",n);
        n=n*2;
    }
    // int a,b,c;
    // printf("Enter first term: ");
    // scanf("%d",&a);
    // printf("Enter common difference: ");
    // scanf("%d",&b);
    // printf("Enter no. of terms you want: ");
    // scanf("%d",&c);
    // for(int i=a;i<=a+(c-1)*b;i=i+b){
    //     printf("%d ",i);
    // }
    return 0;
}