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
        return head;
    }
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=head;
    head=temp;
    return head;
}

void insertAtEnd(struct node* head,int x){
    if(head->data==INT_MIN){
        head->data=x;
        return;
    }
    struct node*t=head;
    while(t->next!=NULL){
        t=t->next;
    }
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    t->next=temp;
}

void split(struct node* head,struct node* h1,struct node* h2){
    struct node* t=head;
    while(t!=NULL){
        if((t->data)%2==0){
            insertAtEnd(h1,t->data);
        }
        else{
            insertAtEnd(h2,t->data);
        }
        t=t->next;
    }
}



void print(struct node* head){
    struct node* t=head;
    while(t->next!=NULL){
        printf("%d ",t->data);
        t=t->next;
    }
    printf("%d\n",t->data);
}

void display(int* arr,int n){
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
}


int main(){
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->data=INT_MIN;
    head->next=NULL;
    for(int i=1;i<=8;i++){
        int x;
        scanf("%d",&x);
        insertAtEnd(head,x);
    }
    printf("Orignal: ");
    print(head);
    //split even and odd.
    struct node* h1=(struct node*)malloc(sizeof(struct node));
    struct node* h2=(struct node*)malloc(sizeof(struct node));
    h1->data=INT_MIN;
    h1->next=NULL;
    h2->data=INT_MIN;
    h2->next=NULL;
    split(head,h1,h2);
    printf("Even linked list: ");
    print(h1);
    printf("Odd linked list: ");
    print(h2);

    // int arr[100];
    // int n=8;
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    // printf("Orignal: ");
    // display(arr,n);
    // //insert 101 at 4th index.
    // int target=4;
    // for(int i=n-1;i>=target;i--){
    //     arr[i+1]=arr[i];
    // }
    // arr[target]=101;
    // n++;
    // display(arr,n);
    // //delete 3rd index.
    // int ele=3;
    // for(int i=ele;i<=n-1;i++){
    //     arr[i]=arr[i+1];
    // }
    // n--;
    // display(arr,n);



    


    return 0;
}