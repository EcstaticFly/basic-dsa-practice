 #include<stdio.h>
 #include<string.h>
 int main(){
    // char s1[14]="Suyash Pandey";
    // char s2[14];


    //strlen(str) ->Returns length of string except \0
    // int l= strlen(s1); //doesn't consider '\0'
    // printf("%d",l);


    //strcpy(destination str, source str) ->copies contents of source string to destination string 
    // strcpy(s2,s1);
    // s2[0]='T';
    // printf("%s\n",s1);
    // printf("%s",s2); //Deep copy


    //strcat(s1,s2) ->concat(means add) s1 with s2 string and store result in s1.


    char s1[]="Suyash";
    char s2[]="Pandey Yo";
    //can't do it with char* s1="Suyash"; as it becomes read-only then,s1 can't be changed.
    strcat(s1,s2); //Suyash+Pandey Y0 = SuyashPandey Yo
    printf("%s",s1);
    return 0;
 }