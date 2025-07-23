#include<stdio.h>
int main(){
    int arr[5]={7,6,3,8,9};
    int sum=0;
    for(int i=0;i<=4;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
