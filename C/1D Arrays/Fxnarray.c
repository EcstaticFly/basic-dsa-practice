//Concept:
// #include<stdio.h>
// void fun(int x){
//     x=7;
//     return;
// }
// int main(){
//     int a=4;
//     printf("%d\n",a);
//     fun(a);
//     printf("%d\n",a);
    //It is just saying to print a,not fun(a). So,a=4 will be printed.
    // also, fun is a void fxn so, it's not going to return any integer values. So, printf("%d",fun(a)); will only show error.
//     return 0;
// }




// #include<stdio.h>
// void fun(int x[]){
//     x[0]=98;
//     return;
// }
// int main(){
//     int arr[2]={7,9};
//     printf("%d\n",arr[0]);
//     fun(arr);
//     printf("%d",arr[0]); //so,array passes by reference, not value.So,change in array at the void fxn affects the orignal array.
//     return 0;
// }




// Swap numbers:
#include<stdio.h>
void fun(int x[]){
    int temp=x[0];
    x[0]=x[1];
    x[1]=temp;
    return;
}
int main(){
    int arr[2]={7,9};
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);
    printf("%d %d",arr[0],arr[1]);
    return 0;
}