//T.C=> O(nlogn).
//S.C=> O(n).

#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;

void merge(int* arr,int s,int e){
    int mid=s+(e-s)/2;

    //Left part ki length:
    int lengthLeft=mid-s+1;

    //Right part ki length:
    int lengthRight=e-mid;

    //left part ki copy bnao:
    int* l=new int[lengthLeft]; //DMA,so remember to free it!
    int k=s;

    for(int i=0;i<lengthLeft;i++){
        l[i]=arr[k++];
    }

    //Right part ki copy bnao
    int *r=new int[lengthRight]; //DMA,so remember to free it!
    
    k=mid+1;
    for(int i=0;i<lengthRight;i++){
        r[i]=arr[k++];
    }

    //Merge the two copies in sorted way:
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

    delete []l; //Free the DMA
    delete []r; //Free the DMA
}

void mergeSort(int* arr,int s,int e){
    if(s>=e) return;

    int mid=s+(e-s)/2;
    //Left part sort krna hai:
    mergeSort(arr,s,mid);

    //Right part sort krna hai:
    mergeSort(arr,mid+1,e);

    //Left aur right part ko merge kr do:
    merge(arr,s,e);
}

int main() {
    int n=27;
    int arr[n]={56,34,90,78,12,0,56,4673,88,45,5,6,3,8,9,90,65,42,57,123,435,5465,7675,997,535,565,32};
    mergeSort(arr,0,n-1);
    for(auto m:arr) cout<<m<<" ";

}
