#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct node{
    int data;
    struct node* next;
};

struct node* insertAtHead(struct node* head,int x){
    if(head->data==INT_MIN){
        head->data=x;
        head->next=NULL;
        return head;
    }
    struct node*temp=(struct node*) malloc(sizeof(struct node));
    temp->data=x;
    temp->next=head;
    head=temp;
    return head;
}

void insertAtEnd(struct node* head,int x){
    if(head->data==INT_MIN){
        head->data=x;
        head->next=NULL;
        return;
    }
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;

    struct node* t=head;
    while(t->next!=NULL){
        t=t->next;
    }
    t->next=temp;


}
void display(struct node* head){

    struct node*t=head;
    while(t->next!=NULL){
        printf("%d ",t->data);
        t=t->next;
    }
    printf("%d ",t->data);

}

struct node* insertBwBef(struct node* head,int target,int x){
    if(target==head->data){
        head=insertAtHead(head,x);
        return head;
    }
    struct node* t=head;
    while(t->next->data!=target){
        t=t->next;
    }
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=t->next;
    t->next=temp;
    return head;

}

void insertBwAf(struct node* head,int target,int x){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;

    struct node* t=head;
    while(t->data!=target){
        t=t->next;
    }
    if(t->next==NULL){
        insertAtEnd(head,x);
        return;
    }
    temp->next=t->next;
    t->next=temp;
}

struct node* del(struct node* head,int x){
    struct node* temp2;
    if(head->data==x){
        temp2=head;
        head=head->next;
        temp2->next=NULL;
        free(temp2);
        return head;
    }
    struct node* t=head;
    while(t->next->data!=x){
        t=t->next;
    }

    if(t->next->next==NULL){
        temp2=t->next;
        t->next=NULL;
        free(temp2);
        return head;
    }
    temp2=t->next;
    t->next=t->next->next;
    temp2->next=NULL;
    free(temp2);
    return head;
}

struct node* rev(struct node* head){
    struct node* curr=head;
    struct node* prev=NULL;
    while(curr!=NULL){
        struct node* forw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forw;
    }
    return prev;
}

int main(){
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->data=INT_MIN;
    head->next=NULL;
    for(int i=1;i<=4;i++){
        int x;
        scanf("%d",&x);
        insertAtEnd(head,x);
    }
    printf("Orignal: ");
    display(head);
    printf("\n");
    printf("Insert before 3: ");
    head=insertBwBef(head,3,101);
    display(head);
    printf("\n");
    printf("Insert after 101: ");
    insertBwAf(head,101,999);
    display(head);
    printf("\n");
    head=insertBwBef(head,1,5);
    display(head);
    printf("\n");
    head=del(head,2);
    head=del(head,5);
    head=del(head,999);
    display(head);
    //Reverse current ll:
    printf("\n");
    head=rev(head);
    display(head);
    return 0;
}