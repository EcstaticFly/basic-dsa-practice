#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Hello World!";
    // char* ptr=str; //ptr points to->str ke address= str[0] ka address
    // printf("%p\n",&str[0]);
    // printf("%p\n",str); //puri string ke liye '&' dene ki zrurt nhi
    // printf("%p",ptr);


    // int i=0;
    // while(str[i]!='\0'){
    //     printf("%c",str[i]);
    //     i++;
    // }
    // while(*ptr!='\0'){
    //     printf("%c",*ptr);
        // ptr++; //string ke elements 1 byte ke difference pr hote hai isliye ptr++ means the next address, which corresponds to next character.
        // i++;
    // }


    str[0]='L';
    // str="Chal bey chutiye";
    printf("%s",str);
    return 0;
}