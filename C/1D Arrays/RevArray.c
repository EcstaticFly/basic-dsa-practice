// M1) My method

// #include<stdio.h>
// int main(){
//     int n,temp;
//     printf("Enter size of array: ");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         printf("Enter element no. %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<=(n-1)/2;i++){
//         temp=arr[i];
//         arr[i]=arr[n-1-i];
//         arr[n-1-i]=temp;
//     }
//     for(int i=0;i<=n-1;i++){
//     printf("%d",arr[i]);
//     }
//     return 0;
// }





// M2)Sir method

#include<stdio.h>
void rev(int x[],int y){
    int i=0;
    int j=y-1;
    while(i<j){ //arr[i] and arr[j] need to be swapped.
        int temp=x[i];
        x[i]=x[j];
        x[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
    printf("Enter element number %d: ",i+1);
    scanf("%d",&arr[i]);
    }
    rev(arr,n);
    for(int i=0;i<=n-1;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}




//M3) Sir method using for loop

// #include<stdio.h>
// void rev(int x[]){
//     for(int i=0,j=6;i<j;i++,j--){ //arr[i] and arr[j] need to be swapped.
//         int temp=x[i];
//         x[i]=x[j];
//         x[j]=temp;
//     }
//     return;
// }
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     rev(arr);
//     for(int i=0;i<=6;i++){
//     printf("%d ",arr[i]);
//     }
//     return 0;
// }