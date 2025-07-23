// #include<stdio.h>
// int main(){
    //1 2
    //3 4
    //5 6
    // int arr[3][2]={{1,2},{3,4},{5,6}};
    //1 2 3 4
    //5 6 7 8 
    // int brr[2][4]={{1,2,3,4},{5,6,7,8}};
    // int res[3][4];
    //multiplying
    // int t=2; //columns of 1st matrix = rows of 2nd matrix = 2
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
            //we have to take, i row of arr[][] and j column of brr[][]
            //(arr[i][0],arr[i][1],arr[i][2]....)*(brr[0][j],brr[1][j],brr[2][j]...)
//             res[i][j]=0;
//             for(int k=0;k<=t-1;k++){
//                 res[i][j]=res[i][j]+(arr[i][k]*brr[k][j]);
//             }

//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             printf("%d ",res[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }





//Taking matrix input from user
#include<stdio.h>
int main(){
    int m,n,p,q;
    printf("Enter number of rows of 1st matrix: ");
    scanf("%d",&m);
    printf("Enter number of columns of 1st matrix: ");
    scanf("%d",&n);
    printf("Enter number of rows of 2nd matrix: ");
    scanf("%d",&p);
    printf("Enter number of columns of 2nd matrix: ");
    scanf("%d",&q);
    int arr[m][n],brr[p][q];
    if(n==p){
        printf("\n");
        for(int i=0;i<=m-1;i++){
            for(int j=0;j<=n-1;j++){
                printf("Enter element number (%d,%d) of 1st matrix: ",i,j);
                scanf("%d",&arr[i][j]);
            }
        }
        printf("\n");
        for(int i=0;i<=p-1;i++){
            for(int j=0;j<=q-1;j++){
                printf("Enter element number (%d,%d) of 2nd matrix: ",i,j);
                scanf("%d",&brr[i][j]);
            }
        }
        printf("\n");
        printf("first matrix:\n");
        for(int i=0;i<=m-1;i++){
            for(int j=0;j<=n-1;j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        printf("Second Matrix:\n");
        for(int i=0;i<=p-1;i++){
            for(int j=0;j<=q-1;j++){
                printf("%d ",brr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        printf("Product of given matrices:\n");
        int res[m][q];
        for(int i=0;i<=m-1;i++){
            for(int j=0;j<=q-1;j++){
                res[i][j]=0;
                for(int k=0;k<=n-1;k++){
                    res[i][j]=res[i][j]+(arr[i][k]*brr[k][j]);
                }
            }
        }
        for(int i=0;i<=m-1;i++){
            for(int j=0;j<=q-1;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    else printf("Given matrices can't be multiplied.");
    return 0;
}