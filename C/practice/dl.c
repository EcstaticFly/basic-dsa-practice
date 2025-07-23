#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* previous; //pointer to Previous node 
};

void display(struct node*temp){
    while(temp->next!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d\n",temp->data);
    while(temp->previous!=NULL){
        printf("%d ",temp->data);
        temp=temp->previous;
    }
    printf("%d\n",temp->data);

}

struct node* insertBegin(struct node*head,int value){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->next=head;
    temp->previous=NULL;
    head->previous=temp;
    head=temp;
    return head;
}

void Bet(struct node* head,int value,int target){
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=value;
    struct node* temp=head;
    while(temp->data!=target){
        temp=temp->next;
    }
    n->next=temp->next;
    n->previous=temp;
    temp->next->previous=n;
    temp->next=n;


}


int main(){

    struct node* head;

    struct node *n1=(struct node*)malloc(sizeof(struct node));
    struct node *n2=(struct node*)malloc(sizeof(struct node));
    struct node *n3=(struct node*)malloc(sizeof(struct node));
    struct node *n4=(struct node*)malloc(sizeof(struct node));

    n1->data=2;
    n1->previous=NULL;
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
    n4->next=NULL;



    display(head);
    printf("\n\n");

    head=insertBegin(head,14);
    display(head);
    printf("\n");
    head=insertBegin(head,21);
    display(head);
    printf("\n");
    head=insertBegin(head,28);
    display(head);
    printf("\n\n");

    Bet(head,55,21);
    display(head);
    printf("\n");
    Bet(head,66,5);
    display(head);
    printf("\n");
    Bet(head,77,14);
    display(head);
    printf("\n");




    return 0;

    
    
}