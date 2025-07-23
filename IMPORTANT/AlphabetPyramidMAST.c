#include<stdio.h>
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int l=1;l<=a-i;l++){
            printf(" ");
        }
        char x='A';
        for(int j=1;j<=i;j++){
            printf("%c",x);
            x=x+1;
        }
        for(int k=1;k<=i-1;k++){
        char y='A';
        y=y+i-(k+1); //IMPORTANT
        printf("%c",y);
        }
        printf("\n");
    }
    return 0;
}



//  for(int i=1;i<=a;i++){
//         for(int l=1;l<=a-i;l++){
//             printf(" ");
//         }
//         for(int j=1;j<=i;j++){
//             char ch=(char)(j+64);
//             printf("%c",ch);
//         }
//         int a=i-1;
//         for(int k=1;k<=i-1;k++){
//         char ch=(char)(a+64);
//         printf("%c",ch);
//         a--;
//         }
//         printf("\n");
//     }
//     return 0;
// }


