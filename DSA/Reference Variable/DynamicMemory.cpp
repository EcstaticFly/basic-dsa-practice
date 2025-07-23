#include<iostream>
#include<algorithm>
#include<numeric>
#include<string>
#include<vector>
using namespace std;

int getSum(int* arr,int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+=i[arr]; //as i[arr]=*(i+arr). 
        //(OR,we can write arr[i].)
    }
    return s;
}
int main(){
    int n;
    cin>>n;

    //Variable size array
    int* arr=new int[n];

    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<getSum(arr,n)<<endl;

    delete []arr;

}