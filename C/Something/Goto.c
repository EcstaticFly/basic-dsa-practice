// #include<stdio.h>
// int main(){
//     int n=5;
//     int i=1;
//     label:
//     if(i<=n){
//         printf("Hey\n");
//     }
//     else goto end;
//     i++;
//     goto label;
//     end:
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter no. of times you want to print: ");
//     scanf("%d",&n);
//     int i=1;
//     label:
//     if(i<=n){
//         printf("%d\n",i);
//     }
//     else goto end;
//     i++;
//     goto label;
//     end:
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter no.: ");
    scanf("%d",&n);
    int b;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("Enter a number.Enter 0 to exit");
            scanf("%d",&b);
            if(b==0){
                goto end;
            }
        }
    }
    end:
    return 0;
}