#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter element no. %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0,j=n-1;i<j;i++,j--){
        if(arr[i]==arr[j]){
            count++;
        }
        else break; //coz,hr element ko check krne ki zarurat nhi. agar ek bhi starting element != corresponding end element hai.So,vo palindrome NHI hoga.To,aage ke elements ko check krne ka pt. nhi. 
    }
    if(count==n/2) printf("Yes,Palidrome.");
    else printf("No,Not a palindrome.");
    return 0;
    }