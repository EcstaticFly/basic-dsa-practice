#include<stdio.h>
#include<stdlib.h>

void merge(int* arr,int s ,int e){
    int mid=s+(e-s)/2;
    int lengthLeft=mid-s+1;
    int lengthRight=e-mid;
    int l[lengthLeft];
    int k=s;
    for(int i=0;i<lengthLeft;i++){
        l[i]=arr[k++];
    }
    int r[lengthRight];
    k=mid+1;
    for(int i=0;i<lengthRight;i++){
        r[i]=arr[k++];
    }
    int i=0,j=0;
    k=s;
    while(i<lengthLeft || j<lengthRight){
        if(i>=lengthLeft){
            arr[k++]=r[j++];
            continue;
        }
        if(j>=lengthRight){
            arr[k++]=l[i++];
            continue;
        }
        if(l[i]<r[j]){
            arr[k++]=l[i++];
        }
        else arr[k++]=r[j++];
    }
}

void mergeSort(int* arr,int s,int e){
    if(s>=e) return;
    int mid=s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);

}

void print(int *arr,int n){
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
}
int main(){
    int arr[7]={7,6,5,4,3,2,1};
    int n=7;
    mergeSort(arr,0,n-1);
    print(arr,n);
    return 0;
}