// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s1[]="Hello World! Its me again how you doin";
    // char* s2=s1; //s2 is a shallow copy
    // s1[0]='M';
    // printf("%s",s2);

    //deep copy-->
    // char s2[]="Hello World";
    // s2[0]='M';
    // printf("%p\n",s1);
    // printf("%p",s2);



    //     int i=0;
    //     int size=0;
    //     while(s1[i]!='\0'){
    //         size++;
    //         i++;
    //     }
    //     printf("%d\n",size);
    //     char s2[size];
    //     for(int i=0;i<=size;i++){
    //         s2[i]=s1[i];
    //     }
    //     printf("%s",s2); //deep copy
    //     return 0;
    // }




#include<stdio.h>
#include<string.h>
int main(){
    char* s1="Hello World! Its me again how you doin";
    char* s2;
    s2=s1;
    printf("%s\n",s1);
    printf("%s",s2);

    return 0;
}