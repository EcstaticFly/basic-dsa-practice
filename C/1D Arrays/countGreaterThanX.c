#include<stdio.h>
int main(){
    int n,x;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=(n-1);i++){
        printf("Enter element no. %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter x: ");
    scanf("%d",&x);
    int count=0;
    for(int i=0;i<=(n-1);i++){
        if(arr[i]>x){
            count=count+1;
        }
    }
    printf("No. of elements greater than x: %d",count);
    return 0;
}