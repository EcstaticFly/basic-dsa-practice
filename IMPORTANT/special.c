#include<stdio.h>
int minimum(int m, int n){
    int min=m;
    if(n<m){min=n;}
    return min;
}
int main(){
//     int a;
//     printf("Enter number of rows: ");
//     scanf("%d",&a);
//     int min;
//     for(int i=1;i<=2*a-1;i++){
//         for(int j=1;j<=2*a-1;j++){
//             int m=i;
//             if(i>a){
//                 m=2*a-i;
//             }
//             int n=j;
//             if(j>a){
//                 n=2*a-j;
//             }
//             if(m<n){min=m;}
//             else{min=n;}
//             printf("%d",min);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// int a;
//     printf("Enter number of rows: ");
//     scanf("%d",&a);
//     int min;
//     for(int i=1;i<=2*a-1;i++){
//         for(int j=1;j<=2*a-1;j++){
//             int m=i;
//             if(i>a){
//                 m=2*a-i;
//             }
//             int n=j;
//             if(j>a){
//                 n=2*a-j;
//             }
//             if(m<n){min=m;}
//             else{min=n;}
//             printf("%d",(a+1)-min);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//doing the same code as above but with fxns.
int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    int min;
    for(int i=1;i<=2*a-1;i++){
        for(int j=1;j<=2*a-1;j++){
            int m=i;
            if(i>a){
                m=2*a-i;
            }
            int n=j;
            if(j>a){
                n=2*a-j;
            }
            //min=minimum of m and n.
            min=minimum(m,n);
            printf("%d",(a+1)-min);
        }
        printf("\n");
    }
    return 0;
}