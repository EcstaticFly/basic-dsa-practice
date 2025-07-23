#include <stdio.h>
int main(){
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
//     if(a%5==0 || a%3==0){
//        if(a%15!=0){
//             printf("%d is divisble by 5 or 3 but not by 15.",a);k
//             }
//             else{
//                 printf("%d is divisble by 5 or 3 and 15.",a);
//             }
// }
if((a%5==0 || a%3==0) && a%15!=0){
    printf("%d is divisble by 5 or 3 but not 15.",a);
}
else {
    printf("%d is not matching the required condition.",a);
}
return 0;
}