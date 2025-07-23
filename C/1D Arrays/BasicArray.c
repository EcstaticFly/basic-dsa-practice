// #include<stdio.h>
// int main(){
    // int arr[5]={3,6,9,12,15};
    //Each element is identified by it's index. Index starts from 0,1,2...(n-1). n= no. of elements.
    // arr[4]=100; //updation/increment
    // printf("%d\n",arr[2]);
    // printf("%d\n",arr[4]);
    // char a[5]={'a','b','c','d','e'};
    // printf("%c\n",a[3]);
    // printf("%c\n",a[1]);
    // float b[3]={2.2,5.6,8.9};
    // printf("%f\n",b[2]);
    // printf("%f\n",b[0]);
    // return 0;
// }



#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){ 
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr[i]); //take input values.
    }
    printf("OUTPUT: ");
    for(int i=0;i<=4;i++){
        printf("%d ",arr[i]); //print the input values.
    }
    return 0;
}