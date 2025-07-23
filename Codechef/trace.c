#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define MAX_SIZE 100

typedef struct{
	char items[100];
	int top;
} Stack;

void intialize(Stack* stack){
	stack->top=-1;
}

void push(Stack* stack,char item){
	stack->items[++stack->top]=item;
}

char pop(Stack* stack){
	return stack->items[stack->top--];
}

int isOperator(char c){
	return (c=='+' || c=='-' || c=='*' || c=='/');
}

int precedence(char op){
	if(op=='+' || op=='-') return 1;
	else if(op=='*' || op=='/') return 2;
	else return 0;
}

void infixToPrefix(char infix[],char prefix[]){
	Stack stack;
	intialize(&stack);

	int len=strlen(infix);
	int j=0;
	for(int i=len-1;i>=0;i--){
		char c=infix[i];
		if(isalnum(c)) prefix[j++]=c;
		else if(c==')') push(&stack,c);
		else if(c=='('){
			while(stack.top!=-1 && stack.items[stack.top]!=')'){
				prefix[j++]=pop(&stack);
			}
			if(stack.top!=-1) pop(&stack);
		}
		else if(isOperator(c)){
			while(stack.top!=-1 && precedence(stack.items[stack.top])>precedence(c)){
				prefix[j++]=pop(&stack);
			}
			push(&stack,c);
		}
	}
	while(stack.top!=-1){
		prefix[j++]=pop(&stack);
	}
	prefix[j]='\0';
	strrev(prefix);
}

int main(){
	char infix[MAX_SIZE];
	char prefix[MAX_SIZE];

	printf("Enter Expresion: ");
	scanf("%s",infix);

	infixToPrefix(infix,prefix);
	printf("Prefix: %s",prefix);
	return 0;
}