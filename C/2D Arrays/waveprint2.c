//M1)Long perhaps stupid way

// #include<stdio.h>
// int main(){
//     int r,c;
//     printf("Enter no. of rows: ");
//     scanf("%d",&r);
//     printf("Enter no. of columns: ");
//     scanf("%d",&c);
//     int arr[r][c];
//     for(int i=0;i<=r-1;i++){
//         for(int j=0;j<=c-1;j++){
//             printf("Enter element no.(%d,%d): ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<=r-1;i++){ //transpose, swap arr[i][j] and arr[j][i]
//         for(int j=i;j<=(c-1);j++){
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//         }
//     }
//     for(int i=0;i<=c-1;i++){
//         if(i%2==0){
//             for(int j=r-1;j>=0;j--){
//                 printf("%d ",arr[i][j]);
//             }
//             printf("\n");
//         }
//         else{
//             for(int j=0;j<=r-1;j++){
//             printf("%d ",arr[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }





//M2)Short and better way

#include<stdio.h>
int main(){
    int r,c;
    printf("Enter no. of rows: ");
    scanf("%d",&r);
    printf("Enter no. of columns: ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            printf("Enter element no.(%d,%d): ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int j=0;j<=c-1;j++){
        if(j%2==0){
            for(int i=r-1;i>=0;i--){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        else{
            for(int i=0;i<=r-1;i++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        
    }
    return 0;
}