#include<stdio.h>
int main(){
    // int a=5;b=10;
    // printf("%d %d %d\n",a,a++,++a);
    // printf("%d %d %d ",n,++n,n++);
    // scanf("%d %d",&a,&b);
    // int *ptr1= &a;
    // int *ptr2= &n;
    // printf("%d",*ptr1 + *ptr2);


    // a=a+b;
    // b=a-b;
    // a=a-b;
    // printf("%d %d",a,b);


    // a=a^b;
    // b=a^b;
    // a=a^b;
    // printf("%d %d",a,b);

    // int value= ++a * (11+7)%30-35/7 + b--;
    // printf("%d", value);

    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter element no. %d(index): ",i);
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<=n-1;i++){
        if(arr[i]>max) max=arr[i];
    }
    int m=-99999;
    for(int j=0;j<=n-1;j++){
        if(arr[j]>m && arr[j]!=max){
            m=arr[j];
        }
    }
    printf("%d",m);
    return 0;
}