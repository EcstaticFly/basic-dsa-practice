#include<stdio.h>


int stack[1000];
int top=-1;

void push(int x){
    stack[++top]=x;
}
int pop(){
    if(top==-1){
        printf("Stack Underflow");
        return -1;
    }
    int y=stack[top--];
    return y;

    
}
void peek(){
    if(top==-1){
        printf("Stack Underflow");
        return;
    }
    printf("%d ",stack[top]);
}
void display(){
    if(top==-1){
        printf("Stack Underflow");
        return;
    }
    int m=top;
    while(m!=-1){
        printf("%d ",stack[m--]);
    }
}

int main(){
    for(int i=1;i<=4;i++){
        int x;
        scanf("%d",&x);
        push(x);
    }
    display();
    int t=pop();
    t=pop();
    printf("\n");
    display();
    t=pop();
    printf("\n");
    display();
    printf("\n");
    peek();



}