#include<stdio.h>
void rev(int x[],int si,int ei){
    for(int i=si,j=ei;i<j;i++,j--){
        int temp=x[i];
        x[i]=x[j];
        x[j]=temp;
    }
    return;
}
int main(){
    int n,k;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter element no. %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter no. of rotations: ");
    scanf("%d",&k);
    int r=k%n;
    rev(arr,0,n-1);
    rev(arr,0,r-1);
    rev(arr,r,n-1);
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}