#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void display(struct node*temp){
    struct node *p=temp;
    while(temp->next!=p){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);

}

struct node* insertBegin(struct node* head,int value){
    struct node* n0=(struct node*)malloc(sizeof(struct node));
    n0->data=value;
    struct node*t=head;
    while(t->next!=head){
        t=t->next;
    }
    t->next=n0;
    n0->next=head;
    head=n0;
    return head;
}
void insertLast(struct node* head,int value){
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=value;
    struct node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void insertAfter(struct node* head,int target,int value){
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=value;
    struct node*temp=head;
    while(temp->data!=target){
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;

}

struct node* DelFirst(struct node* head){
    struct node*temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=head->next;
    struct node*temp2=head;
    head=head->next;
    free(temp2);
    return head;
}

void delLast(struct node*head){
    struct node*temp=head;
    while(temp->next->next!=head){
        temp=temp->next;
    }
    struct node*temp2=temp->next;
    temp->next=head;
    free(temp2);

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
    n4->next=head;

    display(head);
    printf("\n");
    head=insertBegin(head,101);
    display(head);
    printf("\n");
    head=insertBegin(head,31);
    display(head);
    printf("\n");
    head=insertBegin(head,56);
    display(head);
    printf("\n");
    printf("\n");

    insertLast(head,77);
    display(head);
    printf("\n");
    insertLast(head,88);
    display(head);
    printf("\n");
    insertLast(head,99);
    display(head);
    printf("\n\n");

    insertAfter(head,11,881);
    display(head);
    printf("\n");
    insertAfter(head,31,23);
    display(head);
    printf("\n");
    insertAfter(head,5,555);
    display(head);
    printf("\n\n");

    head=DelFirst(head);
    display(head);
    printf("\n");
    head=DelFirst(head);
    display(head);
    printf("\n");
    head=DelFirst(head);
    display(head);
    printf("\n\n");

    delLast(head);
    display(head);
    printf("\n");
    delLast(head);
    display(head);
    printf("\n");
    delLast(head);
    display(head);
    printf("\n");








    


    

    return 0;

    
    
}