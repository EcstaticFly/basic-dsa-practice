#include<iostream>
using namespace std;

int main(){
    int arr[3][4]={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int row=3,col=4;
    int target;
    cin>>target;

    //Binary Search:
    int s=0;
    int e=row*col-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        int element=arr[mid/col][mid%col];
        if(element==target){
            cout<<"Present"<<endl;
            return 0;
        }
        else if(element<target) s=mid+1;
        else e=mid-1;
    }
    cout<<"Absent"<<endl;
}