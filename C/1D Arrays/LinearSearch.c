#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={2,8,6,4,9,3,0};
    int x,idx;
    bool flag=false;
    printf("Enter element you want to search: ");
    scanf("%d",&x);
    for(int i=0;i<=6;i++){
        if (arr[i]==x){
            flag=true;
            idx=i;
            break;
        }
    }
    if(flag==false){
        printf("%d is NOT present in the array.",x);
    }
    else printf("%d is present in the array and its index is %d",x,idx);
    return 0;
}