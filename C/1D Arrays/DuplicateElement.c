#include<stdio.h>
int main(){
   int arr[7]={1,2,10,5,8,2,9}; 
   //koi ek element duplicate hoga, baaki sb unique honge.
   for(int i=0;i<=6;i++){
    for(int j=i+1;j<=6;j++){
        if(arr[i]==arr[j]){
            printf("%d",arr[i]);
            break;
        }
    }
   }
}