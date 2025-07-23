#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    ~node(){ //Own destructor not necessary
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory free for node with data "<<value<<endl;
    }
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

void insertAtHead(node* &head,int d){
    node* temp=new node;
    temp->data=d;
    temp->next=head;
    head=temp;
}

void insertAtEnd(node* &tail,int d){
    node* temp=new node;
    temp->data=d;
    tail->next=temp;
    temp->next=NULL;
    tail=temp;
}

void insertAfter(node* &head,node* &tail,int d,int target){
    //Let target=5.(we want to insert element after 5)
    

    node*t=new node;
    t=head;
    while(t->data!=target){
        t=t->next;
    }
    if(t->next==NULL){
        insertAtEnd(tail,d);
        return;
    }
    node* temp=new node;
    temp->data=d;
    temp->next=t->next;
    t->next=temp;
    
}

void insertBefore(node* &head,int d,int target){
    // Let target=8.(we want to insert element before 8)
    if(target==head->data){
        insertAtHead(head,d);
        return;
    }
    node* temp=new node;
    temp->data=d;
    node*t =new node;
    t=head;
    while(t->next->data!=target){
        t=t->next;
    }
    temp->next=t->next;
    t->next=temp;
}

void del(node* &head,node* &tail,int target){
    if(target==head->data){
        node*temp2=new node;
        temp2=head;
        head=head->next;
        temp2->next=NULL; //for own destructor,if you use default then no need.
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
        temp->next=NULL;
        tail=temp;
        temp2->next=NULL; //for own destructor,if you use default then no need.
        delete temp2;
        return;
    }
    node*temp2=new node;
    temp2=temp->next;
    temp->next=temp->next->next;
    temp2->next=NULL;//for own destructor,if you use default then no need.
    delete temp2;
}

int main(){
    node* n1=new node;
    node* n2=new node;
    node* n3=new node;
    node* head=new node;
    node* tail=new node;
    n1->data=3;
    n1->next=n2;
    head=n1;

    n2->data=5;
    n2->next=n3;

    n3->data=8;
    n3->next=NULL;

    tail=n3;

    cout<<"Orignal: "<<" ";
    print(head);
    

    cout<<"Insert at Beginning: "<<" ";
    insertAtHead(head,15);
    print(head);

    cout<<"Insert at End: "<<" ";
    insertAtEnd(tail,22);
    print(head);


    cout<<"Insert in Between(after target): "<<" ";
    insertAfter(head,tail,101,5);
    print(head);


    cout<<"Insert in Between(before target): "<<" ";
    insertBefore(head,56,8);
    print(head);

    insertAtHead(head,999);
    insertAtEnd(tail,555);
    insertAfter(head,tail,444,22);
    insertBefore(head,333,3);
    insertAtEnd(tail,69);
    insertAfter(head,tail,657,69);
    insertAtEnd(tail,5455);
    insertBefore(head,0,999);
    del(head,tail,555);
    del(head,tail,0);
    del(head,tail,5455);
    del(head,tail,657);
    cout<<endl;
    cout<<"Final:"<<endl;
    print(head);
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;





}