#include<iostream>
#include<vector>
using namespace std;


void rev(int x[],int si,int ei){
    for(int i=si,j=ei;i<j;i++,j--){
        swap(x[i],x[j]);
    }
    return;
}

void solve(int arr[],int n,int k){
    int brr[n];
    for(int i=0;i<=n-1;i++){
        brr[i]=arr[i];
    }
    for(int i=0;i<=n-1;i++){
        arr[(i+k)%n]=brr[i];
    }
    return;
}
int main(){
    int n,k;
    printf("Enter size of array: ");
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    printf("Enter no. of rotations: ");
    cin>>k;
    int r=k%n;
    //Long way:
    rev(arr,0,n-1);
    rev(arr,0,r-1);
    rev(arr,r,n-1);

    //Or, much better way to solve:
    solve(arr,n,k);

    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}