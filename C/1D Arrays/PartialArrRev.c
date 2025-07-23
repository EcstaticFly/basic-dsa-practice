// CONCEPT: Partial array reverse

// M1)
//  #include<stdio.h>
//  int main(){
//      int arr[7]={1,2,3,4,5,6,7};
//      // reverse index 1 to 4.
//      for(int i=1,j=4;i<=j;i++,j--){
//          int temp=arr[i];
//          arr[i]=arr[j];
//          arr[j]=temp;
//      }
//      for(int i=0;i<=6;i++){
//      printf("%d ",arr[i]);
//      }
//      return 0;
//  }

// M2) fxn approach
#include <stdio.h>
void rev(int x[], int i, int j)
{ // now i=1 and j=4.
    while (i <= j)
    {
        int temp = x[i];
        x[i] = x[j];
        x[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    // reverse index 1-4.
    rev(arr, 1, 4);
    // then, give 1 and 4 directly here.If we give 0,6 here then whole array reverse.
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
// if you want to do it with for loop.
// make int si,int ei  (starting index,end index) instead of i,j inside void rev. Now, for(int i=si,j=ei,i<=j;i++,j--){
//   int temp=x[i];
//      x[i]=x[j];
//      x[j]=temp;
//  }