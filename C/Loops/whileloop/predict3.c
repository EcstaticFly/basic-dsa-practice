#include <stdio.h>
int main(){
//     while('a'<'b'){
//         printf("\nMalayalam is a palindrome.");
//     }
//     return 0;
// }
//Infinite loop occurs.
//As character a=97 will always be less than b=98 when there are no operations being performed on a.


// int i=10;
// while(i=20){
//     printf("A computer buff!\n");
// }
// return 0;
// } 
//Infinite loop occurs.
//notice here it's NOT i==20, instead i=20.So basically, initially it assigned [i] a value of 10[i=10].
//and then UPDATED it to i=20 and printed the output.Then again, it updated the i=20 to i=20.Yes,correct.And printed the output again.
//This loop updates infinitely and so infinite output occurs.


// int i;
// while(i=10){
//     printf("%d ",i);
//     i=i+1;
// }
// return 0;
// }
//Infinite loop occurs of 10 10 10 10 10 10....
//program takes i=10 and prints it.Then, it updates i=i+1=11.
//but when it goes in while again it reassigns the value to i=10(understand it).So, the infinite loop continues.


// int x=4,y=0,z;
// while(x>=0){
//     x--;
//     y++;
//     if(x==y){
//         continue;
//     }
//     else{
//         printf("\n%d %d",x,y);
//     }
// }
// return 0;
// }


// int x=4,y=0,z;
// while(x>=0){
//     if(x==y){
//         break;
//     }
//     else{
//         printf("%d %d ",x,y);
//         x--;
//         y++;
//     }
// }
// return 0;
// }