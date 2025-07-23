#include<stdio.h>

int partition(int* arr,int s,int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot) count++;
    }
    int t=arr[s];
    arr[s]=arr[s+count];
    arr[s+count]=t;

    int i=s,j=e;
    while(i<(s+count) && j>(s+count)){
        while(arr[i]<pivot) i++;
        while(arr[j]>pivot) j--;
        if(i<(s+count) && j>(s+count)){
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    return (s+count);
}

void quickSort(int* arr,int s,int e){
    if(s>=e) return;
    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

void print(int* arr,int n){
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
}

int main(){
    int arr[7]={5,7,4,8,3,1,0};
    int n=7;
    quickSort(arr,0,n-1);
    print(arr,n);
    return 0;

}