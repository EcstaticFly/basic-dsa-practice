// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter number of rows: ");
//     scanf("%d",&a);
//     int n=a-1;
//     int nsp=1;
//     int nst=n;
//     char y='A';
//     for(int i=1;i<=2*n+1;i++){
//         printf("%c",y);
//         y++;
//     }
//     printf("\n");
//     for(int i=1;i<=n;i++){
//         char x='A';
//         for(int j=1;j<=nst;j++){
//             printf("%c",x);
//             x++;
//         }
//         for(int k=1;k<=nsp;k++){
//             printf(" ");
//             x++;
//         }
//         for(int l=1;l<=nst;l++){
//             printf("%c",x);
//             x++;
//         }
//         nsp+=2;
//         nst--;
//         printf("\n");
//         }
//         return 0;
//     }

#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int nsp=1;
    int nst=n-1;
    for(int i=1;i<=2*n-1;i++){
        printf("%c",i+64);
    }
    printf("\n");
    for(int i=1;i<=n-1;i++){
        int b=65;
        for(int j=1;j<=nst;j++){
            printf("%c",b);
            b++;
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
            b++;
        }
        for(int l=1;l<=nst;l++){
            printf("%c",b);
            b++;
        }
        nsp+=2;
        nst--;
        printf("\n");
        }
        return 0;
    }