#include<stdio.h>
int main(){
    int n;
    printf("Enter numnber of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=(n-1);i++){
        printf("Enter index no. %d: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=(n-1);i++){
        if(i%2!=0) arr[i]=2*arr[i];
        else arr[i]=arr[i]+10;
    }
    printf("\nAltered values of array:\nEven indexed=orignal+10.\nOdd indexed=orignal*2.\n");
    for(int i=0;i<=(n-1);i++){
    printf("\nElement no. %d(index): %d",i,arr[i]);
   }
    return 0;
}