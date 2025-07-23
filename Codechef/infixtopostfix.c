#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
//infix to postfix:

char stack[100];
int top=-1;

void push(char x){
    stack[++top]=x;
}
char pop(){
    if(top==-1) return -1;
    else return stack[top--];
}
int priority(char op){
    if(op=='+' || op=='-') return 1;
    else if(op=='*' || op=='/') return 2;
    else return 0;
}


int main(){
    char exp[100];
    printf("Enter infix expression: ");
    scanf("%s",exp);
    char *e,x;
    e=exp;

    printf("Postfix: ");
    while(*e!='\0'){
        if(isalnum(*e)){
            printf("%c",*e);
        }
        else if(*e=='('){
            push(*e);
        }
        else if(*e==')'){
            while((x = pop()) != '(')
                printf("%c", x);
            
        }
        else{
            while(priority(stack[top])>=priority(*e)){
                printf("%c",pop());
            }
            push(*e);
        }
        e++;
    }
    while(top!=-1){
        printf("%c",pop());
    }
    return 0;

}