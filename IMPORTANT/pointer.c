// #include<stdio.h>
// int main(){
    // int a=5;
    // int* x=&a; //int* x is pointer.
    // printf("%p\n",x); //%p is used to print address.
    // printf("%p",&x); //we can also print address of pointer x. 

    // printf("%d",*x); //means, x ke andr jis bhi variable ka address store hai use point kro,
    //Aur uske andr jo hai use print kro.
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a=25;
//     int* x;
//     x=&a; //NOTE: it CAN'T be *x=&a; otherwise it will give error.
//     printf("%p\n",&a); //will print the same reult.
//     printf("%p",x); //will print the same reult.
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a=25;
//     int* x=&a; //int* -> means stores address of interger.
    // *x=7; //VERY VERY IMPORTANT //value of a is changed.
    // int** y=&x; //int** -> int* ka address store krta hai.
//     printf("%p\n",&x);
//     printf("%p\n",y);
//     return 0;
// }



#include<stdio.h>
int main(){
    int a=25;
    int* x=&a;
    int** y=&x;
    int***z=&y;
    printf("%d\n",a);  //prints value of a.
    printf("%d\n",*x);  //prints value of a.
    printf("%d\n",**y); //prints value of a.
    printf("%d\n",***z);
    return 0;
}