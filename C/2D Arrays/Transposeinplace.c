//Here we are going to change the place(or position) of elements of the matrix to get the transpose.
//In transpose.c,we simply printed the elements of the orignal matrix in a different order to get transpose.WE DIDN'T CHANGE ANYTHING,JUST PRINTED DIFFERENTLY. BUT NOW WE WILL CHANGE THE MATRIX ITSELF TO GET TRANSPOSE.
//We will swap the 2 values from their positions.And,we are going to do it in square matrix. So that,principal diagonal remains unchanged and the values above and below it get swapped.




#include<stdio.h>
int main(){
    int n; //square matrix so, r=c=n.
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter marix:\n");
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("Transpose of the matrix:\n");
    //swap arr[i][j] and arr[j][i]
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=i;j++){ //note:j will go from i to n-1
        //or, for(int j=i;j<=n-1;j++) will also work
           int temp=arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
        }
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}