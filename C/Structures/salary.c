#include<stdio.h>
#include<string.h>
int main(){
    struct Person{ //elements are stored in continuous memory location.
        char name[60];
        float salary;
        int age;
    }a,b;
    strcpy(a.name,"Suyash Pandey");
    a.age=25;
    a.salary=50000000;
    
    strcpy(b.name,"Arjun");
    b.age=26;
    b.salary=20000;

    printf("%s\n",a.name);
    printf("%d",b.age);
    return 0;
}