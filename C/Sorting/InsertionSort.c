#include<stdio.h>
int main(){
    int arr[6]={33,52,15,12,3356,424};
    int n=6;
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    //Insertion Sort
    for(int i=0;i<=n-2;i++){ // (n-1) passes
    int j=i+1; //important.
    while(j>=1 && arr[j]<arr[j-1]){
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
    }
    }
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}