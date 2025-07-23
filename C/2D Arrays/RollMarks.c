#include<stdio.h>
int main(){
   int r;
   printf("Enter no. of students: ");
   scanf("%d",&r);
   int arr[r][4];
   for(int i=0;i<=r-1;i++){
    for(int j=0;j<=3;j++){
        if(j==0){
        printf("Enter roll no.: ");
        scanf("%d",&arr[i][0]);
        }
        else if(j==1){
            printf("Enter Physics marks of Roll no. %d: ",arr[i][0]);
            scanf("%d",&arr[i][1]);
        }
         else if(j==2){
            printf("Enter Chemistry marks of Roll no. %d: ",arr[i][0]);
            scanf("%d",&arr[i][2]);
        }
         else if(j==3){
            printf("Enter Maths marks of Roll no. %d: ",arr[i][0]);
            scanf("%d",&arr[i][3]);
        }
    }
   }
   for(int i=0;i<=r-1;i++){
    for(int j=0;j<=3;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
   }
    return 0;
}