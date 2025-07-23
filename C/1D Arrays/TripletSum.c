#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("enter element no. %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter x: ");
    scanf("%d",&x);
    int count=0;
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            for(int k=j+1;k<=n-1;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    printf("Triplet with sum=x: (%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                    count=count+1;
                }
            }
        }
    }
    printf("Number os triplet with sum=x: %d",count);
    return 0;
}