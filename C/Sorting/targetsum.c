#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,6,9,11,12,18,19};
    int target=17;
    int i=0;
    int j=9;
    while(i<j){
        if(arr[i]+arr[j]==target){
            printf("%d %d",arr[i],arr[j]);
            break;
        }
        else if(arr[i]+arr[j]>target) j--; //to dec. sum
        else i++; //to inc. sum
    }
    //T.C=O(n)
    return 0;
}