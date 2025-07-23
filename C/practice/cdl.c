#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* previous; //pointer to Previous node 
};

void display(struct node*head){
    struct node*temp=head;
    while(temp->next!=head){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d\n",temp->data);
    // while(temp->previous!=head){
    //     printf("%d ",temp->data);
    //     temp=temp->previous;
    // }
    // printf("%d %d\n",temp->data,temp->previous->data);

}

struct node* InsertFirst(struct node* head,int value){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    struct node*temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
    head->previous=newnode;
    newnode->previous=temp;
    head=newnode;
    return head;
}




int main(){

    struct node* head;

    struct node *n1=(struct node*)malloc(sizeof(struct node));
    struct node *n2=(struct node*)malloc(sizeof(struct node));
    struct node *n3=(struct node*)malloc(sizeof(struct node));
    struct node *n4=(struct node*)malloc(sizeof(struct node));

    n1->data=2;
    n1->previous=n4;
    n1->next=n2;

    head=n1;

    n2->data=5;
    n2->previous=n1;
    n2->next=n3;

    n3->data=8;
    n3->previous=n2;
    n3->next=n4;

    n4->data=11;
    n4->previous=n3;
    n4->next=head;



    display(head);
    head=InsertFirst(head,95);
    display(head);
    printf("\n");
    head=InsertFirst(head,31);
    display(head);
    printf("\n");
    head=InsertFirst(head,44);
    display(head);
    printf("\n");

    return 0;

    
    
}