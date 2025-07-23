//S.C=> O(1).(without taking recursive stack space in account)
//T.C=> 
//Best/Avg. Case: O(nlogn).
//Worst Case: O(n2).


#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;

int partition(int *arr,int s,int e){
    int pivot=arr[s];
    int count=0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot) count++;
    }
    swap(arr[s],arr[s+count]); //pivot index=s+count.

    int i=s;
    int j=e;
    while(i<(s+count) && j>(s+count)){ 
        // if(arr[i]>pivot){
        //     if(arr[j]<=pivot){
        //         swap(arr[i++],arr[j--]); //pivot idx se pehle (elements<pivot) ho & pivot idx ke aage(elements>pivot) ho.
        //     }
        //     else{
        //         j--;
        //     }
        // }
        // else i++;

        //Upper approach:mine.Both approach work!

        while(arr[i]<pivot) i++;
        while(arr[j]>pivot) j--;

        if(i<(s+count) && j>(s+count)){
            swap(arr[i++],arr[j--]);
        }

    }
    return (s+count);


}

void quickSort(int *arr,int s,int e){
    if(s>=e) return;

    int p=partition(arr,s,e); //pivot index

    quickSort(arr,s,p-1); //Left part sort kro.(pivot idx se peeche)
    quickSort(arr,p+1,e); //Right part sort kro.(pivot idx ke aage)
}

int main() {
    int n=8;
    int arr[n]={0,1,0,1,0,1,0,1};
    quickSort(arr,0,n-1);

    for(auto i:arr) cout<<i<<" ";

}
