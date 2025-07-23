#include<stdio.h>
#include<string.h> //use string.h if you want to use %s
int main(){
    char str[]="Hello World! How you doing lately? My life is getting on the sunny side perhaps and I feel kinda good for now";


    // computer last mein khud \0 lga deta hai.
    // int i=0;
    // while(str[i]!='\0'){
    //     printf("%c",str[i]);
    //     i++;
    // }


    // printf("%s",str);


    puts(str); //prints string directly.
    puts("\nVS Code yo vs code yo"); //can also be used to print something else.
    // Computer considers anything inside "" as string. Yes,it's same for printf("VS Code yo vs code"), even here, text inside "" is considered as string by computer.
    return 0;
}