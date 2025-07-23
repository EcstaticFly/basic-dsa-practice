#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
#include<stdlib.h>
void print(int* arr,int n){
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
}

void selectionSort(int* arr,int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            int t=arr[min];
            arr[min]=arr[i];
            arr[i]=t;
        }
    }
    print(arr,n);
}
void bubbleSort(int* arr,int n){
    for(int i=0;i<=n-2;i++){
        bool flag=true;
        for(int j=0;j<=n-2-i;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
                flag=false;
            }
        }
        if(flag==true) break;
    }
    print(arr,n);
}
void insertionSort(int* arr,int n){
    for(int i=0;i<=n-2;i++){
        int j=i+1;
        while(j>=1 && arr[j-1]>arr[j]){
            int t=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=t;
            j--;
        }
    }
    print(arr,n);
}

void merge(int* arr,int s,int e){
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
    int i=0;
    int j=0;
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
        else{
            arr[k++]=r[j++];
        }
    }
}
void mergeSort(int* arr,int s,int e){
    if(s>=e) return;
    int mid=s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}


int partition(int *arr,int s,int e){
    int pivot=arr[s];
    int count=0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot) count++;
    }
    int t=arr[s];
    arr[s]=arr[s+count];
    arr[s+count]=t;

    int i=s;
    int j=e;
    while(i<(s+count) && j>(s+count)){ 
        while(arr[i]<pivot) i++;
        while(arr[j]>pivot) j--;
        if(i<(s+count) && j>(s+count)){
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
            i++;
            j--;
        }
    }
    return (s+count);
}
void quickSort(int *arr,int s,int e){
    if(s>=e) return;
    int p=partition(arr,s,e); 
    quickSort(arr,s,p-1); 
    quickSort(arr,p+1,e); 
}


int main(){
    int n=6;
    int arr[6]={6,5,4,3,2,1};
    // selectionSort(arr,n);
    // bubbleSort(arr,n);
    // insertionSort(arr,n);
    // mergeSort(arr,0,n-1);
    quickSort(arr,0,n-1);
    print(arr,n);
    
}