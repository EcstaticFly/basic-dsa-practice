#include <bits/stdc++.h>
  using namespace std;
  
bool isPossible(int *arr, int k,long mid,int n){
    long c=1;
    long lastPosition=arr[0];
    for(int i=0;i<=n-1;i++){
        if(arr[i]-lastPosition>=mid){
            c++;
            if(c==k) return true;
            lastPosition=arr[i];
        }
    }
    return false;

}
long long binarySearch(int *arr, int k,long long p,int n){
    long long start=0;
    long long end=p;
    long long ans=-1;
    while(start<=end){
        long long mid=start+(end-start)/2;
        if(isPossible(arr,k,mid,n)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
  int main() {

    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    // sort(arr,arr+n);
    int s=0;
    vector<int> v;
    int l=0;
    for(int i=0;i<n;i++) s+=arr[i];
    for(int i=0;i<n-1;i++){
      l=l+arr[i];
      s=s-arr[i];
      cout<<s<<" "<<l<<endl;
      v.push_back(min(l,s));
    }
    cout<<*max_element(v.begin(),v.end());

    return 0;

  }