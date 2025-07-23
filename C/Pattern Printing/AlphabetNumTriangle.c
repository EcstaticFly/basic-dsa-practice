// #include <stdio.h>
// int main(){
//     int a;
//     printf("Enter number of rows: ");
//     scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         char x='A';
//         for(int j=1;j<=i;j++){
//             if(i%2==0){
//                 printf("%c ",x);
//             }
//             else{//i%2!=0
//             printf("%d ",j);
//             }
//             x=x+1;
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            if(i%2!=0){
                printf("%d ",j);
            }
            else{
            printf("%c ",j+64);
            }
        }
        printf("\n");
    }
    return 0;
}