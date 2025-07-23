#include<bits/stdc++.h>
using namespace std;

void countingSort(const vector<int> &arr) {
    
    int n=arr.size();
    int minElement=arr[0], maxElement=arr[0];
    for (int i=1;i<n;i++) {
        if(arr[i]<minElement) minElement = arr[i]; 
        if(arr[i]>maxElement) maxElement = arr[i]; 
    }
    int range=maxElement-minElement+1;
    vector<int>count(range,0);
    for (int i=0;i<n;i++) {
        count[arr[i]-minElement]++; 
    }
    for (int i=1;i<range;i++) {
        count[i]+=count[i-1];
    }
    vector<int> output(n);
    for (int i=n-1;i>=0;i--) {
        output[count[arr[i]-minElement]-1]=arr[i];
        count[arr[i]-minElement]--; 
    }
    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";
    }
}

int main(){
    int t;
    cout<<"Enter size of array: ";
    cin>>t;
    vector<int> arr;
    for(int i=0;i<t;i++){
        int p;
        cin>>p;
        arr.push_back(p);
    }
    countingSort(arr);
    return 0;
}