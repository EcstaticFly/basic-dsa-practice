#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=(n-1);i++){
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=0;i<=(n-1);i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("Min. Element: %d",min);
    return 0;
}