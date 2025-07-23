//M1) Loop approach

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the size of array: ");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<=(n-1);i++){
//         printf("Enter element number %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     int max=arr[0];
//     for(int i=0;i<=(n-1);i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     printf("Max. Element: %d",max);
//     return 0;
// }



//Concept: 
// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int min=INT_MIN;
//     printf("%d\n",min); //Gives the min. value we can store inside int data type,as of today.
    // int max=INT_MAX;
    // printf("%d",max); //Gives the max. value we can store inside int data type,as of today.
    // return 0;
// }
//As int takes 4 bytes=32 bits. So, range= [(-2)^32] to [(2)^32 - 1]




//M2)

#include<stdio.h>
#include<limits.h> //Don't forget to include this too when using this concept.
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=(n-1);i++){
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    for(int i=0;i<=(n-1);i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("Max. Element: %d",max);
    return 0;
}