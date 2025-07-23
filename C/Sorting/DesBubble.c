#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5]={24,42,45,12,40};
    int n=5;
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<=n-2;i++){
        bool flag=true;
        for(int j=0;j<=n-2-i;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                flag=false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}