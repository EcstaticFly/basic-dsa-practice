#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int product=1;
    int arr[n];
    for(int i=0;i<=(n-1);i++){
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=(n-1);i++){
        product=product*arr[i];
    }
    printf("Product of all elements of the array: %d",product);
    return 0;
}
