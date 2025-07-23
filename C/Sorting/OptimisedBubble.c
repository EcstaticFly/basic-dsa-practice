#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5]={5,2,0,22,1};
    int n=5; //Here,n=5(just wrote for covinient)
    for(int i=0;i<=n-1;i++){ 
        printf("%d ",arr[i]);
    }
    printf("\n");
    //Bubble Sort
    for(int i=0;i<=n-2;i++){ 
        bool flag=true; //Means we assume sorted array.
        for(int j=0;j<=n-2-i;j++){ 
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false; //so,agar ek bhi baar swap nhi hua,mtlb flag is still true.
            }
        }
        if(flag==true) break;
    }
    //Time Complexity(T.C)=O(n^2). [Worst Case]
    for(int i=0;i<=n-1;i++){ 
        printf("%d ",arr[i]);
    }
    return 0;
}
