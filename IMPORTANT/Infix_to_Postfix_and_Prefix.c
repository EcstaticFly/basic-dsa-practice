//Infix To Postfix Conversion:
//(infix to prefix given below,commented out)

#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char exp[100];
    char *e, x;
    printf("\n\nEnter the infix expression : ");
    scanf("%s",exp);
    printf("\n");
    e = exp;

    printf("\nPostfix Expression: ");
    
    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c ",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    }
    
    while(top != -1)
    {
        printf("%c ",pop());
    }
    printf("\n\n");
    return 0;
}



//Infix to Prefix Conversion:

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>

// #define MAX_SIZE 100

// typedef struct {
//     char items[MAX_SIZE];
//     int top;
// } Stack;

// void initialize(Stack *stack) {
//     stack->top = -1;
// }

// void push(Stack *stack, char item) {
//     stack->items[++stack->top] = item;
// }

// char pop(Stack *stack) {
//     return stack->items[stack->top--];
// }

// int isOperator(char c) {
//     return (c == '+' || c == '-' || c == '*' || c == '/');
// }

// int precedence(char op) {
//     if (op == '+' || op == '-')
//         return 1;
//     else if (op == '*' || op == '/')
//         return 2;
//     else
//         return 0;
// }

// void infixToPrefix(char infix[], char prefix[]) {
//     Stack stack;
//     initialize(&stack);

//     int i, j = 0;
//     int len = strlen(infix);

//     for (i = len - 1; i >= 0; i--) {
//         char c = infix[i];
//         if (isalnum(c)) {
//             prefix[j++] = c;
//         } else if (c == ')') {
//             push(&stack, c);
//         } else if (c == '(') {
//             while (stack.top != -1 && stack.items[stack.top] != ')') {
//                 prefix[j++] = pop(&stack);
//             }
//             if (stack.top != -1)
//                 pop(&stack); // Discard the '('
//         } else if (isOperator(c)) {
//             while (stack.top != -1 && precedence(stack.items[stack.top]) > precedence(c)) {
//                 prefix[j++] = pop(&stack);
//             }
//             push(&stack, c);
//         }
//     }

//     while (stack.top != -1) {
//         prefix[j++] = pop(&stack);
//     }

//     prefix[j] = '\0';
//     strrev(prefix);
// }

// int main() {
//     char infix[MAX_SIZE];
//     char prefix[MAX_SIZE];

//     printf("\n\nEnter infix expression: ");
//     scanf("%s", infix);

//     infixToPrefix(infix, prefix);
//     printf("Prefix expression: %s\n\n", prefix);

//     return 0;
// }
