#include<stdio.h>
int main(){
    // int a;
    // printf("Enter number of rows: ");
    // scanf("%d",&a);
    // for(int i=1;i<=a;i++){
    //     for(int j=1;j<=i;j++){
    //         if((i+j)%2!=0){
    //             printf("1");
    //         }
    //         else{
    //             printf("0");
    //         }
    //     }
    //     printf("\n");
    // }
//     return 0;
// }
    //Ye wala code neeche wale code ka ulta print krta hai.




    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2!=0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}


    // Method 2:
//     int b;
//     for(int i=1;i<=a;i++){
//         if(i%2!=0){
//             b=1;
//         }
//         else{
//             b=0;
//         }
//         for(int j=1;j<=i;j++){
//             printf("%d",b);
//             if(b==0){b=1;}
//             else{b=0;}
//         }
//         printf("\n");
//     }
//     return 0;
// }


//say, if((i+j)%2==0 ==0){printf("1");}
//else{printf("0");} this statement given what does it mean and what do you think will be output when i=1,j=1?
//it means,first i+j=1+1=2 so, 2%2==0 This CONDITION is true. then, again,
//(i+j)%2==0 ==0 means is TRUE==0? Which is false as T(1)!=0(F). So,this if will not be used when i+j=even.
//so, output=0. [the else output]