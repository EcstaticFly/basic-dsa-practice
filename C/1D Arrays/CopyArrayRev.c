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
    int brr[n];
    for(int i=0;i<=n-1;i++){
        brr[i]=arr[(n-1)-i];
        printf("%d ",brr[i]);
    }
    return 0;
}