#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    // scanf("%s",str); //No '&' to be used here in scanf
    // printf("Your input was: %s",str);
    //here scanf with %s ignores everything at and after first whitespace comes in the string, so input of (suyash pandey) will output only (suyash).
    //to solve this, we can use a rather hard to remember thing i.e.
    // scanf("%[^\n]s",str);
    // printf("Your input was: %s",str);



    gets(str); //inputs entire sentence
    puts(str);
    return 0;
}