#include<stdio.h>

int n=6;
int queue[6];
int front=-1,rear=-1;

void push(int x){
    if(front==(rear+1)%n){
        printf("Queue Overflow");
        return;
    }
    if(rear==-1){
        front++;
    }
    rear=(rear+1)%n;
    queue[rear]=x;
}
int pop(){
    if(front==-1){
        printf("Queue Underflow");
        return -1;
    }
    if(front==rear){
        int y=queue[front];
        front=rear=-1;
        return y;
    }
    int y=queue[front];
        front=(front+1)%n;
    return y;


}

void display(){
    int p=front,q=rear;
    while(p!=q){
        printf("%d ",queue[p]);
        p=(p+1)%n;
    }
    printf("%d\n",queue[p]);

}

int main(){
    for(int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        push(x);
    }
    display();
    int t=pop();
    t=pop();
    t=pop();
    push(101);
    display();



    return 0;
}