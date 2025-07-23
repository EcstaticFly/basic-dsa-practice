#include<iostream>
using namespace std;
//Search first and last occurence of an element in  an array.
//T.C=O(logn); //IMP

int LeftbinarySearch(int arr[],int n,int k){
    int start=0;
    int end=n-1;
    int ans=-1;
    
    while(start<=end){
        int mid=start+(end-start)/2;
        if (arr[mid] == k) {
          ans=mid;
          end=mid-1;
        } 
        else if (arr[mid] < k)
          start = mid + 1;
        else end=mid-1;
    }
    return ans;
}

int RightbinarySearch(int arr[],int n,int k){
    int start=0;
    int end=n-1;
    int ans=-1;
    
    while(start<=end){
        int mid=start+(end-start)/2;
        if (arr[mid] == k) {
          ans=mid;
          start=mid+1;
        } 
        else if (arr[mid] < k)
          start = mid + 1;
        else end=mid-1;
    }
    return ans;
}

int main(){
    int arr[8]={1,2,3,3,3,3,3,5};
    int n=8;
    cout<<"Element you want to search: ";
    int k;
    cin>>k;
    pair<int,int> l;
    l.first=LeftbinarySearch(arr,n,k);
    l.second=RightbinarySearch(arr,n,k);
    cout<<(l.first)<<" "<<(l.second)<<endl;
    cout<<"Total occurences: "<<(l.second-l.first+1)<<endl;
}