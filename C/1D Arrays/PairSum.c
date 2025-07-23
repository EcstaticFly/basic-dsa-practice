#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter element no. %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter x: ");
    scanf("%d",&x);
    int count=0;
    for(int i=0;i<=(n-1);i++){
        for(int j=i+1;j<=n-1;j++){ //Or, for(int j=n-1;j>i;j--)
            if(arr[i]+arr[j]==x){
                printf("Pairs with sum=x: (%d,%d)\n",arr[i],arr[j]);
                count=count+1;
            }
        }
    }
    printf("Number of pairs whose sum equals to x: %d",count);
    return 0;
}