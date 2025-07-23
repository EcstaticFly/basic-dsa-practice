#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int element){
    int start=0;
    int end=size-1;
    
    while(start<=end){
        int mid=start + (end-start)/2;
        if(arr[mid]==element) return mid;
        else if(arr[mid]<element) start=mid+1; //go to right part.
        else end=mid-1; //go to left part.
    }
    return -1;
}
int main(){
    int arr[5]={3,8,11,14,16};
    int size=5;
    int element=8;
    int index=binarySearch(arr,size,element);
    cout<<index<<endl;
}