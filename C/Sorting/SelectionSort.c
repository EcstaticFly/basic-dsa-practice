#include<stdio.h>
#include<limits.h>
int main(){
    int arr[11]={6,5,4,3,2,1,0,0,1,1,3};
    int n=11;
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    //Selection Sort:
    for(int i=0;i<=n-2;i++){ //(n-1) passes
    int minIndex=i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        //Swap the min and first element of unsorted part.
        //Swap using minIndex and i.
        if(i!=minIndex){
            int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
        }
    }
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}