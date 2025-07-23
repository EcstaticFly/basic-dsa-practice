#include<stdio.h>
int main(){
    int n,m,a,b,p,q,sum=0;
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    printf("Enter no. of columns: ");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            printf("Enter element no. (%d,%d): ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter first coordinate of rectangle(a,b): ");
    scanf("%d%d",&a,&b);
    printf("Enter last coordinate of rectangle(p,q): ");
    scanf("%d%d",&p,&q);
    for(int i=a;i<=p;i++){
        for(int j=b;j<=q;j++){
            sum=sum+arr[i][j];
        }
    }
    printf("The sum of elements of the rectangle from (%d,%d) to (%d,%d) is %d",a,b,p,q,sum);
    return 0;
}