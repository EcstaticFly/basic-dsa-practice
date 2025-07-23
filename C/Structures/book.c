#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[100];
        int pages;
        float price;
    }a,b,c;
    a.pages=460;
    a.price=800;
    strcpy(a.name,"A Brief History Of Time"); 
    //V.V.I=>strcpy,can be used as a type of intialization.

    printf("%s\n",a.name);
    printf("%d\n",a.pages);
    printf("%f\n",a.price);


    return 0;
}