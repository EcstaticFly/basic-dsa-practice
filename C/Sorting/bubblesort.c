#include<stdio.h>
int main(){
    int arr[5]={53,219,335,212,21};
    int n=5; //Here,n=5(just wrote for covinient)
    for(int i=0;i<=n-1;i++){ 
        printf("%d ",arr[i]);
    }
    printf("\n");
    //Bubble Sort
    for(int i=0;i<=n-2;i++){ //Number of max passes=n-1=4;0->3=4.
        for(int j=0;j<=n-2-i;j++){ //if arr[j]>arr[j+1];swap.Also after each pass,1 step is reduced,n-2-i.
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //Time Complexity(T.C)=O(n^2). [Worst Case]
    for(int i=0;i<=n-1;i++){ 
        printf("%d ",arr[i]);
    }
    return 0;
}