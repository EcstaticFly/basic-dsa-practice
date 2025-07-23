#include <stdio.h>
int main(){
    //  char x='A';
    // for(int i='A';x<='Z';i++){
    //     printf("ASCII value of %c is %d.\n",x,i);
    //      x=x+1;
    // }


//    char y='a';
//    for(int i='a';y<='z';i++){
//     printf("The ASCII value of %c is %d.\n",y,i);
//     y=y+1;
//    }

// BY TYPECASTING-->
for(int i=65;i<=90;i++){
    char x= (char)i;
    printf("%c -> ",x);
    printf("%d\n",i);
}
    return 0;
}