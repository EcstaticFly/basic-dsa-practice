#include<stdio.h>
int main(){
    //Read: "r",(fgets) used
    // FILE*ptr=fopen("Suyash.txt","r");
    // char str[100];
    // printf("\n");
    // while(fgets(str,100,ptr)!=NULL){
    //     printf("%s",str);
    // }


    //Write: "w",(fputs) used
    FILE*ptr=fopen("New.txt","w"); //khud ek nai file new.txt bna deta hai
    char str[]="You are a genius Suyash,probably😉";
    fputs(str,ptr); //Inserted string into New.txt
    fclose(ptr); //Good practice.
    return 0;
}