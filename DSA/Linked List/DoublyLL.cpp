#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
};

void print(node* &head){
    node*temp =new node;
    temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;

}

void insertAtEnd(int d,node* &tail){
    node* temp=new node;
    temp->data=d;
    temp->next=NULL;
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}
void insertAtHead(int d,node* &head){
        node* t=new node;
    t->data=d;
    t->next=head;
    t->prev=NULL;
    head->prev=t;
    head=t;
}
void printRev(node* &head){
    node* t=new node;
    t=head;
    while(t->next!=NULL){
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<t->data<<endl;
    while(t->prev!=NULL){
        cout<<t->data<<" ";
        t=t->prev;
    }
    cout<<t->data<<endl;
}
void insertAfter(node* &head,node* &tail,int d,int target){
    //Let target=5.(we want to insert element after 5)
    node*t=new node;
    t=head;
    while(t->data!=target){
        t=t->next;
    }
    if(t->next==NULL){
        insertAtEnd(d,tail);
        return;
    }
    node* temp=new node;
    temp->data=d;
    temp->prev=t;
    temp->next=t->next;
    t->next->prev=temp;
    t->next=temp;
}

void insertBefore(node* &head,int d,int target){
    // Let target=8.(we want to insert element before 8)
    if(target==head->data){
        insertAtHead(d,head);
        return;
    }
    node*t =new node;
    t=head;
    while(t->next->data!=target){
        t=t->next;
    }
    node* temp=new node;
    temp->data=d;
    temp->next=t->next;
    temp->prev=t;
    t->next->prev=temp;
    t->next=temp;
}

void del(node* &head,node* &tail,int target){
    if(target==head->data){
        node*temp2=new node;
        temp2=head;
        head->next->prev=NULL;
        head=head->next;
        temp2->next=NULL;

        
        delete temp2;
        return;
    }
    node* temp=new node;
    temp=head;
    while(temp->next->data!=target){
        temp=temp->next;
    }
    if(temp->next->next==NULL){
        node*temp2=new node;
        temp2=tail;
        tail->prev=NULL;
        temp->next=NULL;
        tail=temp;
       
        delete temp2;
        return;
    }
    node*temp2=new node;
    temp2=temp->next;
    temp->next=temp->next->next;
    temp2->next=NULL;
    temp2->prev=NULL;
    temp->next->prev=temp;
    
    delete temp2;
}

int main(){
    node* head=new node;
    node* tail=new node;
    node* n1=new node;
    n1->data=2;
    n1->prev=NULL;
    n1->next=NULL;
    head=n1;
    tail=head;
    print(head);

    insertAtEnd(5,tail);
    insertAtEnd(7,tail);
    insertAtEnd(9,tail);
    insertAtEnd(13,tail);
    print(head);
    insertAtHead(-1,head);
    insertAtHead(-2,head);
    insertAtHead(-4,head);
    print(head);
    
    // printRev(head);
    insertAfter(head,tail,0,-1);
    insertAfter(head,tail,8,7);
    insertAfter(head,tail,4,2);
    insertAfter(head,tail,15,13);
    print(head);
    insertBefore(head,10,9);
    insertBefore(head,20,-2);
    insertBefore(head,30,-4);
    print(head);
    del(head,tail,30);
    del(head,tail,-4);
    del(head,tail,13);
    del(head,tail,20);
    del(head,tail,15);
    del(head,tail,9);
    del(head,tail,4);
    del(head,tail,7);
    del(head,tail,-1);
    del(head,tail,0);
    print(head);
    insertAtHead(0,head);
    insertAtEnd(11,tail);
    insertAfter(head,tail,-5,5);
    insertAfter(head,tail,12,11);
    insertBefore(head,88,-2);
    insertBefore(head,99,8);
    print(head);
    cout<<head->data<<" "<<tail->data<<endl;
    del(head,tail,0);
    del(head,tail,11);
    del(head,tail,-5);
    del(head,tail,12);
    del(head,tail,88);
    del(head,tail,99);
    print(head);
    cout<<head->data<<" "<<tail->data;





}