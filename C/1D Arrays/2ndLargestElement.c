//M1) 2 Loop approach.

// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int n;
//     printf("Enter size of array: ");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         printf("Enter element number %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     int max=INT_MIN;
//     for(int i=0;i<=n-1;i++){
//         if(max<arr[i]){
//         max=arr[i];
//         }

//     }
//     We get the max element from it.Now,

//     int max2=INT_MIN; //second largest element.
//     for(int i=0;i<=n-1;i++){
//         if(arr[i]!=max && max2<arr[i]) max2=arr[i];
//     }
//     We check the "max" value excluding the element with max value.So, we get the second max value. 
//     printf("Second Largest Element: %d",max2);
//     return 0;
// }





// M2) Single loop approach

#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]){
        max2=max;
        max=arr[i];
        }
        else if(max2<arr[i] && arr[i]!=max){
            max2=arr[i];
        }
    } 
    printf("Second Largest Element: %d",max2);
    return 0;
}