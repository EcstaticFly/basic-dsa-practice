#include<stdio.h>
int main(){
    int arr[7]={4,9,4,3,9,3,8};
    //Koi ek element unique hoga, baaki sb duplicate honge.
    for(int i=0;i<=6;i++){
        int count=0;
        for(int j=0;j<=6;j++){
            if(arr[i]==arr[j] && i!=j){
                count++;
            }
        }
        if(count==0){
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}