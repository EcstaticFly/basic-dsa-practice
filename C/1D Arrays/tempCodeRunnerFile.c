#include<stdio.h>
int main(){
    int n,temp;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter element no. %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=(n-1)/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    for(int i=0;i<=n-1;i++){
    printf("%d",arr[i]);
    }
    return 0;
}