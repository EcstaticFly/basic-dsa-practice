#include<stdio.h>

int queue[1000];
int front=-1;
int rear=-1;

void push(int x){
    if(rear==-1){
        front++; 
    }
    rear++;
    queue[rear]=x;
    
}
int pop(){
    if(front==-1 || front>rear){
        printf("Queue Underflow");
        return -1;
    }
    else{
        int y=queue[front];
        front++;
        return y;
    }
}
void display(){
    int f=front,r=rear;
    while(f!=r){
        printf("%d ",queue[f]);
        f++;
    }
    printf("%d ",queue[f]);
}
void peek(){ 
    if(front==-1){
        printf("Queue Underflow");
        return;
    }
    printf("%d ",queue[front]);
}

int main(){


    for(int i=1;i<=6;i++){
        int x;
        scanf("%d",&x);
        push(x);
    }
    display();
    int t=pop();
    t=pop();
    push(100);
    printf("\n");
    display();
    printf("\n");
    peek();


    return 0;
}