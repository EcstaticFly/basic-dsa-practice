//ULTIMATE METHOD: using little maths.
#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int nsp=n;
    for(int i=0;i<=n;i++){
        int first=1;
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
     for(int j=0;j<=i;j++){
        printf("%d ",first);
        first=first*(i-j)/(j+1);
        }
        nsp--;
        printf("\n");
    }
    return 0;
}
