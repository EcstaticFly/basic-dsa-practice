#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct node{
    int data;
    struct node* prev;
    // struct node* prev;
};
struct node* push(struct node* top,int x){
    if(top->data==INT_MIN){
        top->data=x;
        return top;
    }
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->prev=top;
    top=temp;
    return top;
}
struct node* pop(struct node* top){
    struct node* temp2=top;
    top=top->prev;
    temp2->prev=NULL;
    free(temp2);
    return top;
}
void display(struct node* top){
    struct node* t =top;
    while(t->prev!=NULL){
        printf("%d ",t->data);
        t=t->prev;
    }
    printf("%d\n",t->data);
}


int main(){
    struct node* top=(struct node*)malloc(sizeof(struct node));
    top->data=INT_MIN;
    top->prev=NULL;
    // for(int i=1;i<=5;i++){
    //     int x;
    //     scanf("%d",&x);
    //     top=push(top,x);
    // }
    top=push(top,10);
    top=push(top,20);
    top=push(top,30);
    top=push(top,8);
    display(top);
    printf("%d\n",top->data);
    top=pop(top);

    display(top);
    // top=pop(top);
    // top=pop(top);
    // display(top);
    // top=push(top,101);
    // display(top);


    return 0;
}