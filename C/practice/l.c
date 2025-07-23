#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void display(struct node*temp){
    while(temp->next!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}


int main(){

    struct node* head;

    struct node *n1=(struct node*)malloc(sizeof(struct node));
    struct node *n2=(struct node*)malloc(sizeof(struct node));
    struct node *n3=(struct node*)malloc(sizeof(struct node));
    struct node *n4=(struct node*)malloc(sizeof(struct node));

    n1->data=2;
    n1->next=n2;

    head=n1;

    n2->data=5;
    n2->next=n3;

    n3->data=8;
    n3->next=n4;

    n4->data=11;
    n4->next=NULL;

    display(head);
    printf("\n");

    struct node* newnode=(struct node*)malloc(sizeof(struct node));

    newnode->data=49;
    newnode->next=head;
    head=newnode;
    display(head);

    printf("\n");

    struct node* n5=(struct node*)malloc(sizeof(struct node));

    n5->data=110;
    n5->next=NULL;
    struct node*temp;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n5;
    display(head);
    printf("\n");

    struct node*n0=(struct node*)malloc(sizeof(struct node));
    n0->data=78;
    struct node*t2;
    t2=head;
    while(t2->data!=8){ //insert after 8
        t2=t2->next;
    }
    n0->next=t2->next;
    t2->next=n0;
    display(head);
    printf("\n");

    struct node*n6=(struct node*)malloc(sizeof(struct node));
    n6->data=55;

    struct node*t3;
    t3=head;
    while(t3->next->data!=8){
        t3=t3->next;
    }
    n6->next=t3->next;
    t3->next=n6;
    display(head);
    printf("\n\n");

    struct node*p=head;
    head=head->next;
    free(p);
    display(head);
    printf("\n");

    struct node*q;
    q=head;
    while(q->next->next!=NULL){
        q=q->next;
    }
    struct node* m1=q->next;
    q->next=NULL;
    free(m1);
    display(head);
    printf("\n");

    struct node*p2;
    p2=head;
    while(p2->next->data!=78){
        p2=p2->next;
    }
    struct node*q2=p2->next;
    p2->next=p2->next->next;
    free(q2);
    display(head);

    

    return 0;

    
    
}