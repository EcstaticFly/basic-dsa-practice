#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=(n-1);i++){
        printf("Enter index no. %d: ",i);
        scanf("%d",&arr[i]);
    }
    int sume=0;
    int sumo=0;
    for(int i=0;i<=(n-1);i++){
        if(i%2!=0) sumo=sumo+arr[i];
        else sume=sume+arr[i];
    }
    printf("\nDifference betwwen sum of elements at even indices to the sum of elements at odd indices: %d",sume-sumo);
    return 0;
}