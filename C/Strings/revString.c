#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    puts("Enter a string: ");
    scanf("%[^\n]s",str);
    puts("The reverse string is:");//puts ki property,automatically ek \n bhi de deta hai
    int k=0;
    int size=0; //To get the size of the input string
    while(str[k]!='\0'){
        size++;
        k++;
    }
    printf("%d\n",size);
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts(str);
    return 0;
}